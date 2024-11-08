//제발 변수 초기화하자
#include <string>
#include <iostream>
using namespace std;
int main(void){
    int l,sum=0,count=0;
    string text;
    cin >> l;
    for(int i =0; i<l; i++){
        sum =0;
        count=0;
        cin >> text;

        for(int j=0; j<text.length(); j++){
            if(text[j] =='O') {
                count++;
                sum+=count;
            }
            else count = 0;
        }

        printf("%d \n",sum);

    }
}