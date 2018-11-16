#include<stdio.h>
#define MAX_pon 10
int main();
int main()
{
int i,j;
int pon[MAX_pon]={31,34,3,66,66,77,88,100,90,1};

printf("並べかえる前\n");
for(i=0;i<MAX_pon;i++){
    printf("\t%d",pon[i]);
}


for(i=0;i<MAX_pon-1;i++){
    for(j=i+1;j<MAX_pon;j++){
        if(pon[i]>pon[j]){
            int tmp;
            tmp=pon[i];
            pon[i]=pon[j];
            pon[j]=tmp;
        }
        
}
}
printf("\n並べ替えた後\n");
for(j=0;j<MAX_pon;j++){
    printf("\t%d",pon[j]);
}

    return 0;
}
