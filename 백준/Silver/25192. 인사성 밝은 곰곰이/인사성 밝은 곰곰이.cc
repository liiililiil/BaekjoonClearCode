#include <stdio.h>
#include <iostream>
#include <set>
#include <string>

using namespace std;
int main(void){
    int l;
    scanf("%d",&l);

    int sum = 0;
    string temp;
    set<string> list;
    for(int i = 0; i <l; i++){
        cin >> temp;
        if(temp == "ENTER"){
            sum += list.size();
            list.clear();
        }
        else
            list.insert(temp);
    }
    sum += list.size();

    printf("%d",sum);
}