//제발 변수 초기화하자
#include <stdio.h>



int main(void){
    int x,y,min= 100000,sum= 0,_sum= 0;
    int input;

    scanf("%d %d",&y,&x);
    int arr[y][x];

    for(int i=0; i <y; i++){
        for(int j=0; j< x; j++){
            arr[i][j] =0;

            scanf("%c",&input);

            if(input == 10){
                j--;
                continue;
            }

            if(input == 87) arr[i][j] =1;
            if(input == 66) arr[i][j] =0;
        }
    }


    for(int i=0; i <y -7; i++){
        for(int j=0; j< x -7; j++){
            sum =0;
            _sum =0;

            for(int l=i; l <i+8; l++){
                for(int k=j; k<j+8; k++){
                    if((l+k)%2 == 0){
                        if(arr[l][k] == 1) sum++;
                        if(arr[l][k] == 0) _sum++;
                    } else{
                        if(arr[l][k] == 0) sum++;
                        if(arr[l][k] == 1) _sum++;
                    }
                }
            }

            if(min > sum) min = sum;
            if(min > _sum) min = _sum;

        }
    }

    printf("%d",min);





}