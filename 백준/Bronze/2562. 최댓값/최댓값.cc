#include <stdio.h>
int main(void){
    int maxl= 0,max= 0,input;
    
    for(int i = 0; i <9; i++){
        scanf("%d",&input);
        if(max < input){
            max = input;
            maxl = i+1;
        }
    }
    printf("%d\n%d",max,maxl);
}