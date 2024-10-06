#include <stdio.h>
int main(void){
    int l;
    scanf("%d",&l);
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j<l-1-i; j++)
            printf(" ");
        
        for(int j = 0; j<=i; j++)
            printf("*");
        
        printf("\n");
    }
}