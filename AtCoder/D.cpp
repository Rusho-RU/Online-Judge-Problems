#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 550

int sticks[10] = {0, 2, 5, 5, 4, 5, 6, 3, 7, 6};
char data[9];
int n, m;
string dp[][10010];
int dpn[9][10010];

bool check(string& a, string& b){
    if(a.size() > b.size())
        return true;
    if(a.size() < b.size())
        return false;

    for(int i=0; i<a.size(); i++)
        if(a[i]<b[i])
            return false;
    return true;
}

string recur(int id, int mask, int s, string num){
    cout<<id<<" "<<" "<<s<<" "<<num<<endl;

    if(s==n)
        return num;

    if(s>n || id==m){
        return "";
    }

    string ret1, ret2;

    ret1 = recur(id+1, s, num);
    num+=data[id];
    ret2 = recur(id, s+sticks[data[id]-'0'], num);

    if(check(ret1, ret2))
        dp[id][s] = ret1;
    else
        dp[id][s] = ret2;

    dpn[id][s] = 1;
    return dp[id][s];
}

int main(){
    FasterIO;

    while(cin>>n>>m){
        for(int i=0; i<m; i++){
            cin>>data[i];
        }

        sort(data, data+m, greater<int>());

        memset(dpn, -1, sizeof dpn);

        string ans = recur(0, 0, "");

        cout<<ans<<endl;
    }

    return 0;
}
