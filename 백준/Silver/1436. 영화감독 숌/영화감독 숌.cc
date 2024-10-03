#include <stdio.h>
int main(void){
    int TargetDevilNum, nowDevilNum, num, tempNum, devilcount;
    scanf("%d",&TargetDevilNum);
    
    num = 665;
    nowDevilNum = 0;


    while(nowDevilNum != TargetDevilNum){
        devilcount = 0;
        tempNum = ++num;
        
        while(tempNum != 0){
            if(tempNum%10 == 6){
                devilcount++;
                
                if(devilcount == 3){
                    nowDevilNum++;
                    break;

                }
            } 

            else devilcount = 0;
            tempNum/=10;
        }
    }

    printf("%d",num);
}