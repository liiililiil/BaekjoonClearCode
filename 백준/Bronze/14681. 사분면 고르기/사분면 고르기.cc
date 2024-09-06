#include <stdio.h>
int main(void){
    int i,j;
    scanf("%d \n %d",&i,&j);
    if(i < 0){
        if(j < 0){
            printf("3");
        }else{
            printf("2");
        }
    }else{
        if(j < 0){
            printf("4");
        }else{
            printf("1");
        }
    }
}