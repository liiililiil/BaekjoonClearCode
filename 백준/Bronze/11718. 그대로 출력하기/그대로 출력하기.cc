#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(void){
    char input;
    for(int i =0; i<10000; i++){
        input = '-';
        scanf("%c",&input);
        if(input == '-') return 0;
        if(input == '10') {
            printf("\n");
            i--;
        }
        else printf("%c",input);
    }

}
