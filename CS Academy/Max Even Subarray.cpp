#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        long long val;
        vector<long long>data;
        long long dp[n];

        for(int i=0; i<n; i++){
            scanf("%lld",&val);
            data.push_back(val);
        }

        dp[0] = data[0] + data[1];
        dp[1] = data[1] + data[2];

        long long ans = max(dp[0], dp[1]);

        for(int i=2; i+1 < (int)data.size(); i++){
            dp[i] = max(dp[i-2] + data[i] + data[i+1], data[i] + data[i+1]);
            ans = max(ans, dp[i]);
        }

        printf("%lld\n",ans);
    }

    return 0;
}

