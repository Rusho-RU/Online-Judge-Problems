#include <bits/stdc++.h>
using namespace std;

long long MOD;

long long BigMOD(long long a, long long b){
    long long ans=1,hold=a%MOD;
    while(b){
        if(b & 1) ans=(ans*hold)%MOD;
        hold=(hold*hold)%MOD;
        b>>=1;
    }
    return ans;
}

int main(){
    long long a,b;
    while(scanf("%lld%lld%lld",&a,&b,&MOD)==3)
        printf("%lld\n",BigMOD(a,b));
    return 0;
}


