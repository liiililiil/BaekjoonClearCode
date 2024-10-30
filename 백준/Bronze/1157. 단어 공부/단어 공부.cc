//제발 변수 초기화하자
#include <iostream>
#include <string>

using namespace std;
int main(void){
    int arr[26],max = 0;
    char output;

    string input;
    cin >> input;

    for(int i=0; i<26; i++) //초기화
        arr[i] = 0;

    for(int i=0; i<input.length(); i++){
        if(input[i] < 91){ //대문자
            arr[input[i] -65]++;
            if(max < arr[input[i] -65]) {
                max = arr[input[i] -65];
                output = input[i];
            }

        }
            
        else{ //소문자 
            arr[input[i] -97]++;
            if(max < arr[input[i] -97]) {
                max = arr[input[i] -97];
                output = input[i] - 32;
            }
        }
    }

    //중복검사
    for(int i=0; i<26; i++){
        if(output-65 != i &&arr[i] == max) output = '?';
    }

    cout << output;

}