#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    int N,c_1,c_2,i;
    scanf("%d %d %d\n",&N,&c_1,&c_2);
    int p[N];
    int sum=0;//利益
    int kabu=0;//持ち株の数
    
    for(i=0;i<N;i++){
        scanf("%d\n",&p[i]);
    if(p[i]<=c_1){
      sum+=p[i]-c_1;
      kabu+=1;
    }else if(p[i]>=c_2){
        sum+=(p[i]-c_2)*kabu;
        kabu=0;
    }else if(p[i]<c_2 && p[i]>c_1){
        i++;
    }
    if(i==N){
        kabu=0;
        break;
    }
    }
    printf("%d",sum);
}
