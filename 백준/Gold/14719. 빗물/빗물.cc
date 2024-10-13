#include <stdio.h>

int main(void){
    int x, y;

    //받는 부분
    scanf("%d %d",&y,&x);
    int height[x];
    for(int i = 0; i <x; i++)
        scanf("%d",&height[i]);

    ///연산 부분
    int max = 0, tempSum = 0, sum = 0;
    //일단 height 최고값에서 시작
    for(int i = 0; i <x; i++)
        if(max < height[i]) max= height[i];

    for(int i= max; i >= 0; i--){ //y 
        for(int j= 0; j< x; j++){ //x
            if(j == 0 && i > height[0])//만약 첫번째 라인이 뚥려있으면 다음 블럭이 나올때까지 패스
                while(i > height[j] && j < x-1){j++;}
            
            if(j == x-1 && i > height[x-1]){//만약 마지막 라인이 뚥려있으면 이전 계산을 취소
                sum -=tempSum;
                tempSum = 0;
                continue;
            }

            if(i> height[j]){
                sum++;
                tempSum++;
            }else{
                tempSum = 0;
            }
        }
        sum -=tempSum;
        tempSum = 0;
    }

    // //디버그 출력
    // for(int i = 0; i < x; i++){
    //     for(int j= 0; j< height[i]; j++){
    //         printf("ㅁ");
    //     }
    //     printf("\n");
    // }

    //연산 부분
    // for(int i = y-1; i >= 0; i--){
    //     for(int j= 0; j < x; j++){
    //         if(j == 0 && arr[i][j] == false)
    //             while(arr[i][j] == false || j < x){j++;};

    //         if(j == x-1 && arr[i][j] == false){
    //             sum -= tempSum;
    //             tempSum = 0;
    //             continue;
    //         }

    //         if(arr[i][j] == false){
    //             sum++;
    //             tempSum++;
    //         }else 
    //             tempSum = 0;
    //     }
    //     sum -= tempSum;
    //     tempSum = 0;

    // }

    printf("%d",sum);
    printf("\n");

}
