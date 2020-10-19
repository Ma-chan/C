#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    int n,i;
    char s[256];
    char str[256]="Hello ";
    char *tok;
    char s2[]=",";
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&s);
        
        strcat(str,s);
    }
     tok=strtok(str,s2);


    printf("%s.",str);
}
