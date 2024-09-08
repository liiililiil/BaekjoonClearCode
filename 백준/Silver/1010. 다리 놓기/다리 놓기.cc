#include <stdio.h>
long long fac(int i,int cut);

int main(void){
    //계산식 mCn을 이용한다.
    int l,n,m;
    scanf("%d",&l);
    for(int i = 0; i < l; i++){
        scanf("%d %d",&n,&m);
        long long result;
        
        if(m-n < n) result = fac(m,n) / fac(m-n,0);
        else result = fac(m,m-n) / fac(n,0);

        printf("%lld \n",result);
    }
}

long long fac(int i,int cut){
    if(i <= 1 || i <= cut) return 1;
    return i * fac(i-1,cut);
}