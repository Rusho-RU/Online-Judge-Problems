#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAXN 210
#define MAXF 10010

int dp[MAXN][MAXF];
vector<int>length;

void reset(){
    memset(dp, -1, sizeof dp);
    length.clear();
}

int recur(int i, int left, int right){
    if(i==length.size())
        return 0;

    if(length[i]>left && length[i]>right)
        return 0;

    if(~dp[i][left])
        return dp[i][left];

    int ret1 = length[i]<=left ? recur(i+1, left-length[i], right)+1 : 0;
    int ret2 = length[i]<=right ? recur(i+1, left, right-length[i])+1 : 0;

    return dp[i][left] = max(ret1, ret2);
}

void print(int i, int left, int right){
    if(i==length.size())
        return;
    if(length[i]>left && length[i]>right)
        return;

    int ret1 = length[i]<=left ? recur(i+1, left-length[i], right)+1 : 0;
    int ret2 = length[i]<=right ? recur(i+1, left, right-length[i])+1 : 0;

    if(ret1>ret2){
        cout<<"port\n";
        print(i+1, left-length[i], right);
    }

    else{
        cout<<"starboard\n";
        print(i+1, left, right-length[i]);
    }

    return;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    bool first=true;

    while(t--){
        reset();

        int f;
        cin>>f;
        f*=100;

        int l;
        while(cin>>l && l)
            length.push_back(l);

        if(first)
            first&=0;
        else
            cout<<"\n";

        cout<<recur(0, f, f)<<endl;

        print(0, f, f);
    }

    return 0;
}

