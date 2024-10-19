#include <stdio.h>
int main(void){
    int l;
    scanf("%d",&l);
    int a,b;
    for(int i = 0; i <l; i++){
        scanf("%d,%d",&a,&b);
        printf("%d \n",a+b);
    }
}