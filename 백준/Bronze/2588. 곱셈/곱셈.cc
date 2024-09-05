#include <stdio.h>
#include <math.h>
int main(){
    int a,b,temp,sum;

    scanf("%d",&a);
    scanf("%d",&b);
    temp = b;

    for(int i = 1; i <= 3; i++){
        temp = (int)b%(int)pow(10,i); 
        sum += printf("%d\n",temp/(int)pow(10,i-1) * a);
    }

    printf("%d",a*b);


        
}
