#include <bits/stdc++.h>
using namespace std;

long long BigMod(long long a, long long b, long long MOD){
    if(a==0)
        return 1;
    if(b==0)
        return 1;
    if(b%2==0){
        long long c=BigMod(a,b/2,MOD);
        return c*c%MOD;
    }
    else
        return (a*BigMod(a,b-1,MOD))%MOD;
}

int main(){
    long long a,p;
    while(scanf("%lld%lld",&a,&p)==2 && a!=-1 && p!=-1){
        long long po=(p-1)/2;
        long long r=BigMod(a,po,p);
        if(r==1 || r==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
