#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 2020

int dp[3][MAX], n;



int recur(int type, int i, vector<int>data){
    if(isIncreasing(data))
        return 0;

    if(i==n)
        return INT_MAX;

    if(dp[type][i]) return dp[type][i];

    int ret1, ret2, ret3;

    ret1 = recur(0, i+1, data);

    ret2 = recur(1, i+1, change1);
}

int main(){
    FasterIO;

    cin>>n;

    vector<int>v;

    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        v.push_back(val);
    }

    recur(0, 0);

    return 0;
}
