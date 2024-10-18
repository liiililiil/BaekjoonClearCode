#include <stdio.h>
int main(void){
    int l,max = 1;
    scanf("%d",&l);
    float sum = 0.0f, arr[l];
    

    for(int i = 0; i <l; i++){
        scanf("%f",&arr[i]);
        if(arr[i] > max) max = arr[i];
    }

    for(int i = 0; i <l; i++){
        sum += arr[i]/max*100;
    }

    printf("%f",sum/l);
    
}