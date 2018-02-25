#include <bits/stdc++.h>
using namespace std;

int main(){
    long long s,c;
    while(scanf("%lld%lld",&s,&c)==2){
        long long scc;
        if(s>=c)
        {
            scc=c/2;
            printf("%lld\n",scc);
        }
        else
        {
            c-=s*2;
            scc=s+c/4;
            printf("%lld\n",scc);
        }
    }
    return 0;
}
