#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        char c;
        string s;
        while(1){
            c=getchar();
            if(c=='\n') break;
            if(c>='A' && c<='Z' || c>='a' && c<='z')
                s+=c;
        }
        if(s=="DONE") break;
        int size=s.size(),i,j,limit=size/2;
        for(i=0,j=size-1;i<limit;i++,j--){
            if(s[i]>='A' && s[i]<='Z') s[i]+=32;
            if(s[j]>='A' && s[j]<='Z') s[j]+=32;
            if(s[i]!=s[j])
                break;
        }
        if(i==limit) printf("You won't be eaten!\n");

        else printf("Uh oh..\n");
    }
    return 0;
}
