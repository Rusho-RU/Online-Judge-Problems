#include <bits/stdc++.h>
using namespace std;

int factor(long long n){
    n = abs(n);

    if(n==1) return 1;

    int ans = 0;

    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }

            if(ans==0)
                ans = cnt;
            else
                ans = __gcd(ans, cnt);
        }
    }

    if(n!=1)
        return 1;
    return ans;
}

int main(){
    int t, Case = 0;
    scanf("%d",&t);

    while(t--){
        long long n;
        scanf("%lld",&n);
        int ans = factor(n);

        while(n<0 && ans%2==0)
            ans/=2;

        printf("Case %d: %d\n",++Case, ans);
    }

    return 0;
}
