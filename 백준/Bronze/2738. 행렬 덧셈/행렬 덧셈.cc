//제발 변수 초기화하자
#include <stdio.h>
int main(void){
    int x,y,temp; 

    scanf("%d %d",&y,&x);
    int arr[y][x];

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
          scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
          scanf("%d",&temp);
          arr[i][j] += temp;
        }
    }

    for(int i=0; i<y; i++){
        for(int j=0; j<x; j++){
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}