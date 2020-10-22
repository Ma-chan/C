#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

   int N,X;
    scanf("%d %d\n",&N,&X);
   int P_1=10000,P_2=0,P[N],a[N],b[N],c[N],d[N],i;
  
for(i=0;i<N;i++){
  scanf("%d %d %d %d\n",&a[i],&b[i],&c[i],&d[i]);

    if(X<a[i]){
        P[i]=b[i];
    }else{
        if(X>=a[i]+c[i]){
             P[i]=((X-a[i])/c[i]+1)*d[i]+a[i];
        }else{
             P[i]=a[i]+d[i];
        }
    }
  if(P_1>P[i]){
    P_1=P[i];
    }else{
        i++;
    }
    if(P_2<P[i]){
        P_2=P[i];
    }else{
        i++;
    }
   
}

  
printf("%d %d",P_1,P_2);


}

