#include <stdio.h>
int main(void){
    int l, inputl, inputa, inputb, temp, swR ;
    scanf("%d %d",&l, &inputl);
    int arr[l];

    for(int i = 0; i<l; i++) arr[i] = i+1;
    
    for(int i = 0; i <inputl; i++){
        scanf("%d %d",&inputa,&inputb);
        inputa--; inputb--;
        swR = (inputb - inputa +1) /2;
        

        for(int j=0; j<swR; j++){

            temp = arr[inputa +j];
            arr[inputa +j] = arr[inputb -j];
            arr[inputb -j] = temp;  
        }
    }

    for(int i = 0; i<l; i++) printf("%d ",arr[i]);

}