#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    int N,i;
    scanf("%d",&N);
    char t[N][2];
    int e[N],m[N],s[N],j[N],g[N],sum=0,sum_l=0,sum_s=0,sum_c=0;
    for(i=0;i<N;i++){
        sum=e[i]+m[i]+s[i]+j[i]+g[i];
        sum_s=m[i]+s[i];
        sum_l=j[i]+g[i];
        if(sum>=350){
          if(t[i]=="s"){
              if(sum_s>=160){
                  sum_c+=1;
              }else{
                  i++;
              }
          }else{
              if(sum_l>=160){
                  sum_c+=1;
              }else{
                  i++;
              }
          }   
        }else{
            i++;
        }
    }
    
}
