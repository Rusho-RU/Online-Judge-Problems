#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int dp[210][210];

string s;
int k;

int recur(int i, int sz){
    if(i==s.size())
        return dp[i][sz] = sz==k;

    if(dp[i][sz]!=-1)
        return dp[i][sz];

    if(i==s.size()-1)
        return dp[i][sz] = recur(i+1, sz+1);

    if(s[i+1]=='*'){
        return dp[i][sz] = recur(i+2, sz+1) | recur(i+2, sz+2);
    }

    else if(s[i+1]=='?')
        return dp[i][sz] = recur(i+2, sz+1) | recur(i+2, sz);

    else
        return dp[i][sz] = recur(i+1, sz+1);
}

void print(int i, int sz){
    if(i==s.size())
        return;

    if(i==s.size()-1){
        cout<<s[i];
        return;
    }

    else if(s[i+1]=='*'){
        if(dp[i+2][sz+1]){
            cout<<s[i];
            print(i+2, sz+1);
        }

        else{
            cout<<s[i]<<s[i];
            print(i+2, sz+2);
        }
    }

    else if(s[i+1]=='?'){
        if(dp[i+2][sz+1]){
            cout<<s[i];
            print(i+2, sz+1);
        }

        else
            print(i+2, sz);
    }

    else{
        cout<<s[i];
        print(i+1, sz+1);
    }

    return;
}

int main(){
    FasterIO;

    while(cin>>s>>k){
        memset(dp, -1, sizeof dp);

        int res = recur(0, 0);

        if(!res)
            cout<<"Impossible"<<endl;

        else{
            print(0, 0);
            cout<<endl;
        }
    }

    return 0;
}
