#include <stdio.h>
int target, result;

void find(int big, int small);

int main(void){
    scanf("%d", &target);
    find(0,0);
    printf("%d",result);

}
void find(int big,int small){

    int diff = big*5 + small*3;

    if( big < 0) 
        result = -1;
    else if(target - diff >= 5)
        find(big+1,small);

    else if(target - diff >= 3)
        find(big,small+1);

    else if(target - diff > 0) 
        find(big-1,small+1);

    else 
        result = big + small;

}