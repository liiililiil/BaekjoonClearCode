#include <stdio.h>
int main(void){
    int size,l,i,j,k;
    scanf("%d %d",&size,&l);
    
    int arr[size];

    for(int a =0; a<size; a++)
        arr[a]= 0;//초기화
    
    for(int a = 0; a <l; a++){
        scanf("%d %d %d",&i,&j,&k);

        for(int b = i-1; b<j; b++)
            arr[b] = k;
    }

    for(int a= 0; a<size; a++)
        printf("%d ",arr[a]);

}