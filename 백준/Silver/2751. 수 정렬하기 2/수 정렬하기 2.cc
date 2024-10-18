#include <algorithm>
#include <stdio.h>


using namespace std;
int main(void){
    int l;
    scanf("%d",&l);

    int arr[l];

    
    for(int i = 0; i <l; i++){
        scanf("%d",&arr[i]);
    }



    sort(arr,arr+l);


    for(int i = 0; i <l; i++){
        printf("%d \n",arr[i]);
    }
}