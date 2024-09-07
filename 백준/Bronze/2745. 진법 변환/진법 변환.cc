#include <stdio.h>
#include <math.h>

int main(void){
    char num[12];
    int base, count  = 0;
    long long sum = 0;

    scanf("%s %d",&num, &base);

    while (num[count] != '\0') {
        count++;
    }

    for(int i = 0; i < count; i++){
        if(num[i] >= 'A'){
            sum += (num[i] - 'A' + 10) * (long long)pow(base,count-i-1);
        }

        else
            sum += (num[i] - '0') * (long long)pow(base,count-i-1);
        
    }

    printf("%lld", sum);

}