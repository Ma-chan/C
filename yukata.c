#include <stdio.h>
//「ゆかた」ゲットチャレンジ
int main(void){
    // Your code here!
    int N;
    scanf("%d",&N);
    int t[N];
    char s[N]={"in","out"};
    int amount=0;
    int dif=0;
    
    for(int i=0;i<N;i++){
        scanf("%d %s",&t &s);
        if(s[N]=="out"){
            amount = 2*(t[N]+3);
        }else if(s[N]=="in"){
            amount = *(t[N]+5);
        }
    }return amount;
}
