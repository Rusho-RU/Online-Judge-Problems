#include <stdio.h>

#define MAX 1000010

const int MOD = 1000000007;

long long factorial[MAX], inverse_factorial[MAX];

long long BigMOD(long long a, long long b){
    long long ans = 1;
    a%=MOD;

    while(b){
        if(b&1)
            ans = (ans*a)%MOD;
        a = (a*a)%MOD;
        b>>=1;
    }

    return ans;
}

void calculate(){
    factorial[0] = inverse_factorial[0] = 1;

    for(int i=1; i<MAX; i++){
        factorial[i] = (factorial[i-1]*i)%MOD;
        inverse_factorial[i] = (inverse_factorial[i-1] * BigMOD(i, MOD-2)) % MOD;
    }
}

long long nCr(int n, int r){
    return ((factorial[n]*inverse_factorial[n-r])%MOD * inverse_factorial[r])%MOD;
}

int main(){
    calculate();

    int n, a, b, d;

    while(scanf("%d %d %d %d", &n, &a, &b, &d)==4){
        long long ans = (nCr(n, a) * BigMOD(nCr(b, d), a)) %MOD;
        printf("%lld\n", ans);
    }
}
