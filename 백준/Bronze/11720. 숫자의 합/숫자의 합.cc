#include <stdio.h>
int main(void){
    int l,sum = 0;
    scanf("%d",&l);

    char num[l];
    scanf("%s",&num);

    for(int i = 0; i < l; i++) sum +=num[i] - '0';
    printf("%d",sum);
}