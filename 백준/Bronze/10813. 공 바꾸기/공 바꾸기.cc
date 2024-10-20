#include <stdio.h>
int main(void){
    int l, cl, temp,a,b;
    scanf("%d %d",&l,&cl);
    int arr[l];
    for(int i= 0; i<l; i++) arr[i] = i+1;
    
    for(int i = 0; i <cl; i++){
        scanf("%d %d",&a,&b);
        temp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = temp;
    }

    for(int i= 0; i<l; i++) printf("%d ",arr[i]);
}