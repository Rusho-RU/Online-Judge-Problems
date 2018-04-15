#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long n,w;
        scanf("%lld %lld",&n,&w);

        if(w>=9){
            puts("0");
            continue;
        }

        n-=2;
        long long ans;

        if(n)
            ans = ((9-w) * n * 9) % MOD;
        else
            ans = 9-w;

        printf("%lld\n",ans);
    }

    return 0;
}
