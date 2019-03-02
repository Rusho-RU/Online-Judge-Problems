#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAXN 1010
#define MAXC 6000

vector<int>weight, cap;
int dp[MAXN][MAXC];

void reset(){
    weight.clear();
    cap.clear();
    memset(dp, -1, sizeof dp);
}

int recur(int i, int w){
    if(i==weight.size())
        return 0;

    if(~dp[i][w])
        return dp[i][w];

    int ret1 = weight[i]<=w ? recur(i+1, min(cap[i], w-weight[i]))+1 : 0;
    int ret2 = recur(i+1, w);

    return dp[i][w] = max(ret1, ret2);
}

int main(){
    FasterIO;

    int n;

    while(cin>>n && n){
        reset();

        for(int i=0; i^n; i++){
            int w, c;
            cin>>w>>c;
            weight.push_back(w);
            cap.push_back(c);
        }

        cout<<recur(0, MAXC)<<endl;
    }

    return 0;
}
