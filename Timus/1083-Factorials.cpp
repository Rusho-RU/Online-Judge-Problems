#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        char s[20];
        int f=1;
        scanf("%s",s);
        int l=strlen(s);
        while(n>1){
            f=f*n;
            n-=l;
        }
        printf("%d\n",f);
    }
    return 0;
}
