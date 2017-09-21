#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

string s1,s2;
int dp[MAX][MAX];

int LCS(int i, int j){
    if(i==s1.size() || j==s2.size())
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    if(s1[i]==s2[j])
        return dp[i][j]=1+LCS(i+1,j+1);

    return dp[i][j]=max(LCS(i+1,j), LCS(i,j+1));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(getline(cin,s1) && getline(cin,s2)){
        memset(dp, -1, sizeof dp);
        int ans=LCS(0,0);
        cout<<ans<<endl;
    }

    return 0;
}
