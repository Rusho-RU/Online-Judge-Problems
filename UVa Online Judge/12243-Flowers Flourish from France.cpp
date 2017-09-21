#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[10000];
    while(gets(s)){
        if(s[0]=='*')
            break;
        char c=s[0];
        if(s[0]>96)
            c=s[0]-32;
        if(c>='A' && c<='Z'){
            int i,l=strlen(s);
            for(i=1;i<l;i++){
                if(s[i]==' '){
                    if(s[i+1]!=c && s[i+1]!=c+32){
                        break;
                    }
                    i++;
                }
            }
            if(i==l)
                printf("Y\n");
            else
                printf("N\n");
        }

        else
            printf("N\n");
    }
    return 0;
}

