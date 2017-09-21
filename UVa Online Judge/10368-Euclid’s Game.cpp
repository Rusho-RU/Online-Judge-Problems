#include <bits/stdc++.h>
using namespace std;

bool ans(long long n, long long m){
    if(n<m) swap(n,m);
    if(n%m==0 || n/m>1) return true;
    return true^ans(m,n%m);
}


int main(){
    long long a,b;
    while(scanf("%lld %lld",&a,&b),a,b){
        if(ans(a,b)) printf("Stan wins\n");
        else printf("Ollie wins\n");
    }
    return 0;
}
