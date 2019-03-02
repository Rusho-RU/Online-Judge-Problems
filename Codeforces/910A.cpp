#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define INF 0x3f3f3f3f

int main(){
    FasterIO;

    int n, d;
    string s;

    while(cin>>n>>d>>s){
        int dp[n];

        dp[0] = 0;

        for(int i=1; i<n; i++){
            dp[i] = INT_MAX;
            if(s[i]=='1'){
                for(int j=max(0, i-d); j<i; j++){
                    if(dp[j]!=INT_MAX)
                        dp[i] = min(dp[i], dp[j]+1);
                }
            }
        }

        if(dp[n-1]==INT_MAX)
            cout<<-1<<endl;
        else
            cout<<dp[n-1]<<endl;
    }

    return 0;
}

