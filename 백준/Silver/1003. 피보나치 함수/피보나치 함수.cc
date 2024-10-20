#include <stdio.h>

int zero, one;
long me[100],zerosum[100],onesum[100];

int fibonacci(int n);
int main(void){
    for(int i =0; i<100; i++) me[i] = 0;
    int l,input;
    scanf("%d",&l);
    
    for(int i = 0; i <l; i++){
        scanf("%d",&input);
        zero = 0;
        one = 0;
        fibonacci(input);
        printf("%d %d\n",zero,one);
        
    }
}

int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    }else if(me[n] !=0){
        zero += zerosum[n];
        one += onesum[n];
        return me[n];
    } else{
        me[n] = fibonacci(n-1) + fibonacci(n-2);
        zerosum[n] = zero;
        onesum[n] = one;
        return me[n];
    }
}
