//제발 변수 초기화하자
#include <stdio.h>

int dp[20][20][20];

int w(int a,int b,int c){
    if(a<=0 || b<=0 || c<= 0) return 1;
    if(a>20 || b>20 || c>20) return w(20,20,20);
    if(a<b && b<c) return w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
    //b가 중간값이면

    return w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1) - w(a-1,b-1,c-1);
}

int w_Dp(int a, int b, int c){
    if(a<=0 || b<=0 || c<= 0) return 1;
    if(a>20 || b>20 || c>20) return w_Dp(20,20,20);
    if(dp[a-1][b-1][c-1] != 0) return dp[a-1][b-1][c-1];
    if(a<b && b<c) dp[a-1][b-1][c-1] = w_Dp(a,b,c-1) + w_Dp(a,b-1,c-1) - w_Dp(a,b-1,c);
    return dp[a-1][b-1][c-1] = w_Dp(a-1,b,c)+w_Dp(a-1,b-1,c)+w_Dp(a-1,b,c-1) - w_Dp(a-1,b-1,c-1);
}

int main(void){
    for (int i = 0; i < 20; ++i) 
        for (int j = 0; j < 20; ++j) 
            for (int k = 0; k < 20; ++k) 
                 dp[i][j][k] = 0;
    

    int a,b,c;

    while(true){
        scanf("%d %d %d",&a,&b,&c);
        if(a == -1 && b == -1 && c == -1) return 0;
        printf("w(%d, %d, %d) = %d \n",a,b,c,w_Dp(a,b,c));
    }


}