#include <stdio.h>
int main(void){
    // 自分の得意な言語で
    // Let's チャレンジ！！

    int N,i,j;
    scanf("%d",&N);
    int s[N];
    unsigned char s;
    
    //数値を文字列変換して、型キャスト
    for(i=0;i<N;i++){
        scanf("%d",&s[i]);
        s = (char)s[i];
    }
    
    //文字列の要素を比較して、条件分岐
    for(i=0;i<N;i++){
    if(s[i][1]==s[i][2]&& s[i][1]==s[i][3]&&s[i][1]==s[i][4]){
        printf("Four Card");
    }else if(s[i][1]==s[i][2]&& s[i][1]==s[i][3] || s[i][1]==s[i][2]&&s[i][1]==s[i][4] || s[i][1]==s[i][3]&&s[i][1]==s[i][4] ||s[i][2]==s[i][3]&&s[i][2]==s[i][4]){
        printf("Three Card");
    }else if(s[i][1]==s[i][2]&&s[i][3]==s[i][4]||s[i][1]==s[i][4]&&s[i][2]==s[i][3]||s[i][1]==s[i][3]&&s[i][2]==s[i][4]){
        printf("Two Pair");
    }else if(s[i][1]==s[i][2]||s[i][1]==s[i][3]||s[i][1]==s[i][4]||s[i][2]==s[i][3]||s[i][2]==s[i][4]||s[i][3]==s[i][4]){
        printf("One Pair");
    }else{
        printf("No Pair");
    }
    }
}
