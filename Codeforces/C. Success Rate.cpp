#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long x,y,p,q;
        scanf("%I64d %I64d %I64d %I64d",&x,&y,&p,&q);
        long long h1=y*p-x*q,h2=q-p;

        if(h2==0 || h1*h2<0) printf("-1\n");

        else{
            if(h1<0) h1=-h1;
            if(h2<0) h2=-h2;

        }
    }
    return 0;
}
