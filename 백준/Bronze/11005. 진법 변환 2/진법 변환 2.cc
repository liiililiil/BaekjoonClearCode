//제발 변수 초기화하자
#include <stdio.h>
#include <stack>

using namespace std;
stack<char> result;
int input, targetBase, resultTemp;

void cal(){
    resultTemp = input%targetBase;
    if(resultTemp >= 10) result.push(resultTemp+ 'A'-10);
    else result.push(resultTemp+ '0');

}

int main(void){
    scanf("%d %d",&input,&targetBase);

    do{
        cal();
        input /= targetBase;
    } while (input >= targetBase);
    if(input != 0)cal();

    while(!result.empty()){
        printf("%c",result.top());
        result.pop();
    }


}