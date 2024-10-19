#include <stdio.h>
int main(void){
    int l,target,input;
    scanf("%d %d",&l,&target);
    
    for(int i = 0; i <l; i++){
        scanf("%d",&input);
        if(input < target) printf("%d ",input);
    }
}