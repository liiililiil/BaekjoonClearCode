#include <stdio.h>

int main(void){
    int target = 0,count = 0,l;

    scanf("%d %d",&l,&target);

    int coinvalue[l];

    for(int i = 0; i <l; i++)
        scanf("%d",&coinvalue[i]);

    for(int i = l-1; i >= 0; i--){
        if(target >= coinvalue[i]){
            target -= coinvalue[i];
            i++;
            count++;
        }
    }



    printf("%d",count);
}
