#include <stdio.h>
int main(void){
    long long a,b,c; //10^12까지 스캔해야되서 마이너스도 감지해야되나?
    scanf("%lld %lld %lld ", &a,&b,&c);
    printf("%lld",a+b+c);

    // long long을 사용할땐 %lld을 쓰기
}