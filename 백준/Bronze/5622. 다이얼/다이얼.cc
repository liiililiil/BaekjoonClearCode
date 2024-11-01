#include <stdio.h>

int alphabatToInt(char i){
    switch(i){
        case 'A': case 'B': case 'C':
            return 3;
        case 'D': case 'F': case 'E':
            return 4;
        case 'G': case 'H': case 'I':
            return 5;
        case 'J': case 'K': case 'L':
            return 6;
        case 'M': case 'N': case 'O':
            return 7;
        case 'P': case 'Q': case 'R': case 'S':
            return 8;
        case 'T': case 'U': case 'V':
            return 9;
        case 'W': case 'X': case 'Y': case 'Z':
            return 10;
        default:
            return 0;
    }
}

int main(void){
    char input[16];
    int sum= 0;
    scanf("%s",&input);

    for(int i=0; input[i]!= '\0'; i++){
        sum += alphabatToInt(input[i]);

    }

    printf("%d",sum);
    
}