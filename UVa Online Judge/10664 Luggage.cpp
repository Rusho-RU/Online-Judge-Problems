#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAXN 25
#define MAXW 210

vector<int>weight;
int dp[MAXN][MAXW];

void reset(){
    memset(dp, -1, sizeof dp);
    weight.clear();
}

bool recur(int i, int w){
    if(w==0)
        return 1;
    if(i==weight.size())
        return 0;

    if(~dp[i][w])
        return dp[i][w];

    bool ret1 = weight[i]<=w ? recur(i+1, w-weight[i]) : 0;
    bool ret2 = recur(i+1, w);

    return dp[i][w] = ret1|ret2;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        reset();
        int val, sum=0;

        while(cin>>val){
            weight.push_back(val);
            sum+=val;

            if(cin.get()=='\n')
                break;
        }

        if(sum&1){
            cout<<"NO\n";
            continue;
        }

        cout<<(recur(0, sum>>1) ? "YES\n" : "NO\n");
    }

    return 0;
}

