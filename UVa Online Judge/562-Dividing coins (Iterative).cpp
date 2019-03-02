#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int coin[n+1], total=0;

        for(int i=1; i<=n; i++){
            cin>>coin[i];
            total+=coin[i];
        }

        int target = total/2;

        int dp[n+1][target+1];

        for(int i=0; i<=n; i++)
            dp[i][0] = 0;
        for(int i=0; i<=target; i++)
            dp[0][i] = 0;

        for(int i=1; i<=n; i++){
            for(int j=0; j<=target; j++){
                dp[i][j] = coin[i]<=j ? max(dp[i-1][j], dp[i-1][j-coin[i]]+coin[i]) : dp[i-1][j];
            }
        }

        int a = dp[n][target];
        int b = total-a;

        cout<<abs(a-b)<<endl;
    }

    return 0;
}
