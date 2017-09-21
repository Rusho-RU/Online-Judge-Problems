#include <bits/stdc++.h>
using namespace std;

long long check(int n, long long s){
    long long h1=2*s-n*n+n,h2=2*n;
    if(h1%h2==0) return h1/h2;
    return 0;
}

int main(){
    long long n;
    while(scanf("%lld",&n) && n!=-1){
        double s=sqrt(8*n+1);
        int limit=ceil((s-1)/2.0),i;
        long long ans;
        for(i=limit;i;i--){
            ans=check(i,n);
            if(ans) break;
        }
        printf("%lld = %lld + ... + %lld\n",n,ans,ans+i-1);
    }
    return 0;
}
