#include <stdio.h>
#include <stdlib.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    int Q;
    scanf("%d",&Q);
    int N[Q],S=0;
    
    int i;
    
    for(i=0;i<Q;i++){
        scanf("%d",&N[i]);
        if((N[i]%i)==0){
            S[i] += i;
        }
		}
    for(i=0;i<Q;i++){
    if(N[i]==S){
        puts("perfect");
    }else if(abs(N[i]-S)==1){
        puts("nearly");
    }else{
        puts("neither");
    }
    }
    }
    
