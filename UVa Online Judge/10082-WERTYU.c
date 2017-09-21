#include <stdio.h>

int main(){
    char k[]={'Q','W','E','R','T','Y','U','I','O','P','[',']',' ','A','S','D','F','G','H','J','K','L',';',' ','Z','X','C','V','B','N','M',',','.','/','`','1','2','3','4','5','6','7','8','9','0','-','='};
    k[12]=92,k[23]=39;
    char s[10000];
    int i,j;
    while(gets(s)!=NULL){
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='Q' || s[i]=='A' || s[i]=='Z' || s[i]=='`')
                printf("%c",s[i]);
            else{
                for(j=0;j<47;j++){
                    if(s[i]==k[j]){
                        printf("%c",k[j-1]);
                        break;
                    }
                }
                if(j==47)
                    printf("%c",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
