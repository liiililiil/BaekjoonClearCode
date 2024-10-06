#include <stdio.h>
int main(void){
    int l,a,b;
    scanf("%d",&l);
    
    for(int i = 0; i <l; i++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d \n",i+1,a+b);
    }

    
}