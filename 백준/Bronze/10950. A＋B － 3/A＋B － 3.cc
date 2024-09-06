#include <stdio.h>
int main(void){
    int time,i,j;
    scanf("%d",&time);

    for (int k = 0; k < time; k++) {
        scanf("%d %d",&i,&j);
        printf("%d \n",i+j);
    }
    
}