#include <bits/stdc++.h>
using namespace std;

#define MAX 1010

string s;
int dp[MAX][MAX];

int largest(int i, int j){
    if(i>j)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    if(i==j) return dp[i][j]=1;

    if(j-i==1)
        return s[i]==s[j] ? dp[i][j]=2 : dp[i][j]=1;

    if(s[i]==s[j])
        return dp[i][j]=largest(i+1, j-1)+2;

    return dp[i][j]=max(largest(i+1,j), largest(i,j-1));
}

void reset(int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            dp[i][j]=-1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    cin.ignore(1);

    while(t--){
        getline(cin,s);
        reset(s.size());

        int ans=largest(0,s.size()-1);

        cout<<ans<<endl;
    }

    return 0;
}
