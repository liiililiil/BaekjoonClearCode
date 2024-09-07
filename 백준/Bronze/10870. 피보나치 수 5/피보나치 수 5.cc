#include <stdio.h>
int record = 0,one = 1,two, num;
int main(void){

    scanf("%d",&num);

    for(int i = 0; i< num; i++){
        two = record + one;
        record = one;
        one = two;
    }

    printf("%d \n",record);
}
