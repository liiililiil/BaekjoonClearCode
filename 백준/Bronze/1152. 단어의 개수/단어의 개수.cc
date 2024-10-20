#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;
int main(void){
    string text;
    int count = 0;

    while(true){
        text = "Thiswillnotbeused";
        cin>> text;
        if(text == "Thiswillnotbeused") break;
        count++;
    }

    cout << count;
}