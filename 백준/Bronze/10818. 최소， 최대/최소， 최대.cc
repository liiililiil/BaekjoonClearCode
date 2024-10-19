#include <stdio.h>
int main(void){
    int l,max=-1000001,min=1000001,input;
    scanf("%d",&l);
    
    for(int i = 0; i <l; i++){
        scanf("%d",&input);
        if(max < input) max = input;
        if(min > input) min = input;
    }

    printf("%d %d",min ,max);
}