#include <stdio.h>

const int MOD = 1000000007;

long long nC3(long long n){
    return ((n*(n-1)*(n-2))/6)%MOD;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        long long x, y;
        scanf("%lld %lld", &x, &y);

        long long ans = (nC3(y) - nC3(x-1) + MOD)%MOD;

        printf("%lld\n", ans);
    }

    return 0;
}
