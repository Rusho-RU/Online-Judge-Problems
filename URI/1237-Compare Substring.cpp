#include <bits/stdc++.h>
using namespace std;

int lcs(const string& s1, const string& s2){
    int dp[s1.size()+1][s2.size()+1];
    int ans = INT_MIN;

    for(int i=0; i<=s1.size(); i++)
        dp[i][0] = 0;

    for(int i=0; i<=s2.size(); i++)
        dp[0][i] = 0;

    for(int i=0; i<s1.size() ; i++){
        for(int j=0; j<s2.size(); j++){
            if(s1[i]==s2[j]){
                dp[i+1][j+1] = dp[i][j]+1;
                ans = max(ans, dp[i+1][j+1]);
            }
            else
                dp[i+1][j+1] = 0;
        }
    }

    return max(ans, 0);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;

    while(getline(cin,s1)){
        getline(cin, s2);
        int ans = lcs(s1, s2);
        cout<<ans<<endl;
    }

    return 0;
}
