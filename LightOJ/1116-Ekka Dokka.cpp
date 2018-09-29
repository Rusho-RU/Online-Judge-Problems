#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        long long n;
        scanf("%lld",&n);

        printf("Case %d: ",++Case);

        if(n&1){
            puts("Impossible");
            continue;
        }

        long long p = n & -n;
        printf("%lld %lld\n",n/p, p);
    }

    return 0;
}
