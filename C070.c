#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！
    int N,i;
    scanf("%d",&N);
    char s[N][4];
    for(i=0;i<N;i++){
        scanf("%s",&s[i][4]);
    
    if(s[i][1]==s[i][2]&& s[i][1]==s[i][3]&&s[i][1]==s[i][4]){
        printf("Four Card\n");
    }else if(s[i][1]==s[i][2] && s[i][1]==s[i][3]){
       printf("Three Card\n");
    }else if(s[i][1]==s[i][2] && s[i][1]==s[i][4]){
        printf("Three Card\n");
    }else if(s[i][1]==s[i][3] && s[i][1]==s[i][4]){
        printf("Three Card\n");
    }else if(s[i][2]==s[i][3] && s[i][2]==s[i][4]){
        printf("Three Card\n");
    }else if(s[i][1]==s[i][2] && s[i][3]==s[i][4]){
        printf("Two Pair\n");
    }else if(s[i][1]==s[i][4] && s[i][2]==s[i][3]){
        printf("Two Pair\n");
    }else if(s[i][1]==s[i][3] && s[i][2]==s[i][4]){
        printf("Two Pair\n");
    }else if(s[i][2]==s[i][3] || s[i][2]==s[i][4] || s[i][3]==s[i][4]||s[i][1]==s[i][4]|| s[i][1]==s[i][3]||s[i][1]==s[i][2]){
        printf("One Pair\n");
    }else{
        printf("No Pair\n");
    }
    }
}
