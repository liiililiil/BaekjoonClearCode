#include <stdio.h>
int main(void){
    int l,input,arr[10000];
    scanf("%d",&l);
    
    for(int i = 0; i<10000; i++) arr[i] = 0;

    for(int i = 0; i <l; i++){
        scanf("%d",&input);
        arr[input-1]++;
    }

    for(int i = 0; i<10000; i++) for(int j =0; j<arr[i]; j++) printf("%d\n",i+1);
}