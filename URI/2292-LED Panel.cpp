#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[63],c;
        int n;
        scanf("%s %d",s,&n);
        int i,l=strlen(s),j;
        if(c=='X') c='O';
        else c='X';
        for(i=0;i<n;i++){
            if(s[0]=='X') s[0]='O';
            else s[0]='X';
            for(j=1;j<l;j++){
                if(s[j-1]=='X')
                    if(s[j]=='X')
                        s[j]='O';
                    else s[j]='X';

                else break;
            }
        }
        printf("%s\n",s);
    }
    return 0;
}
