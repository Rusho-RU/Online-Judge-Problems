#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,Case=0;
    scanf("%d",&t);

    while(t--){
        getchar();
        char c;
        bool no=false, sign=false, less=false;
        int cnt=0;

        while(cnt!=5){
            while(scanf("%c",&c) && c!='\n'){
                if(no) continue;
                if(c=='|') sign=true;
                else if(c=='<') less=true;

                if(c=='>' && sign==true) no=true;
                if(c=='|' && less==true) no=true;

            }

            sign=false, less=false;

            cnt++;
        }

        printf("Case %d: ",++Case);

        if(no) puts("No Ball");
        else puts("Thik Ball");
    }
    return 0;
}
