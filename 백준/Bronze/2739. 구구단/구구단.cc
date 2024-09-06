#include <stdio.h>
int main(void){
    int first;
    scanf("%d", &first);
    for(int i = 1; i <= 9; i++) printf("%d * %d = %d \n",first, i, i*first);
} 
