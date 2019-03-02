#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define eps 1e-9
#define MAXN 15
#define MAXM 110

int table[MAXN][MAXM], dp[MAXN][MAXM], n, m;

int recur(int i, int h){
    if(i==n)
        return 0;

    if(~dp[i][h])
        return dp[i][h];

    int mx = INT_MIN;

    for(int j=0; j<m && j<h; j++){
        if(table[i][j]>=5)
            mx = max(mx, recur(i+1, h-j-1)+table[i][j]);
    }

    return dp[i][h] = mx;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        cin>>n>>m;

        for(int i=0; i^n; i++)
            for(int j=0; j^m; j++)
                cin>>table[i][j];

        memset(dp, -1, sizeof dp);
        int ret = recur(0, m);
        double ans = eps+ret/(double)n;

        if(ret>0 && ret>=5*n){
            cout<<"Maximal possible average mark - ";
            cout<<fixed<<setprecision(2)<<ans<<".\n";
        }

        else
            cout<<"Peter, you shouldn't have played billiard that much.\n";
    }

    return 0;
}

