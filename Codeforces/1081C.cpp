#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define MOD 998244353
#define MAX 2020

long long factorial[MAX], inverse_factorial[MAX];

long long BigMOD(long long a, long long b){
    if(b==0)
        return 1;

    if(b&1)
        return a * BigMOD(a, b-1) % MOD;

    long long temp = BigMOD(a, b/2);
    return temp * temp % MOD;
}

void calculate(){
    factorial[0] = inverse_factorial[0] = 1;

    for(int i=1; i<MAX; i++){
        factorial[i] = factorial[i-1] * i % MOD;
        inverse_factorial[i] = inverse_factorial[i-1] * BigMOD(i, MOD-2) % MOD;
    }
}

long long nCr(long long n, long long r){
    return ((factorial[n] * inverse_factorial[r])%MOD * inverse_factorial[n-r]) % MOD;
}

long long powm(long long m, long long k){
    long long ans = 1;

    for(long long i=0; i<k; i++)
        ans = (ans * m) % MOD;

    return ans;
}

int main(){
    FasterIO;
    calculate();

    long long m, k, n;

    while(cin>>n>>m>>k){
        long long ans = ((powm(m-1, k) * m) % MOD * nCr(n-1, k)) % MOD;
        cout<<ans<<endl;
    }

    return 0;
}

