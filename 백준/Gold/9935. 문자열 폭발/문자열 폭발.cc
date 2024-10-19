#include <string>
#include <stack>
#include <iostream>

using namespace std;

string text, bomb;

int main(void){
    int bombCount = 0;
    cin >> text;
    cin >> bomb;
    //입력

    stack<char> result,wait;

    for(int i =0; i < text.length(); i++){ //글자 넣기
        result.push(text[i]);

        if(text[i] == bomb[bombCount]){ //폭탄검사
            if(bombCount == bomb.length()-1){
                bombCount = 0;

                for(int j=0; j < bomb.length();j++){ //폭발
                    result.pop();
                }

                for(int j=0; j < bomb.length();j++){ 
                    if(result.empty()) break;
                    wait.push(result.top());
                    result.pop();
                    
                }

                while(!wait.empty()){ //추출한 글자를 폭탄과 비교하여 다시 넣기
                    result.push(wait.top());
                    if(bomb[bombCount] == wait.top()){
                        bombCount++;
                    } else{
                        if(wait.top() == bomb[0]) bombCount= 1;
                        else bombCount = 0;
                    }
                    wait.pop();
                        
                }
            } else{
                bombCount++;

            }
        }else{
            if(text[i] == bomb[0]) bombCount= 1;
            else bombCount = 0;

        }

    }

    if(result.empty()) cout << "FRULA";

    while(!result.empty()){
        wait.push(result.top());
        result.pop();
    }

    while(!wait.empty()){
        cout << wait.top();
        wait.pop();
    }
}