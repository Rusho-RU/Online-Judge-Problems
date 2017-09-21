#include <bits/stdc++.h>
using namespace std;

map<long long, vector<long long> >dp;

vector<long long> factor(long long n){
    if(n==1) return dp[n];
    if(dp[n].size()) return dp[n];
    long long i,j;
    vector<long long>v;
    for(;n>=4;){
        if(n%2) break;
        dp[n].push_back(2);
        v=factor(n/2);
        copy(v.begin(),v.end(),back_inserter(dp[n]));
        return dp[n];
    }

    for(;n>=9;){
        if(n%3) break;
        dp[n].push_back(3);
        v=factor(n/3);
        copy(v.begin(),v.end(),back_inserter(dp[n]));
        return dp[n];
    }

    for(;n>=25;){
        if(n%5) break;
        dp[n].push_back(5);
        v=factor(n/5);
        copy(v.begin(),v.end(),back_inserter(dp[n]));
        return dp[n];
    }

    for(i=7,j=1;i*i<=n;j++){
        if(!(n%i)){
            while(!(n%i)){
                dp[n].push_back(i);
                v=factor(n/i);
                copy(v.begin(),v.end(),back_inserter(dp[n]));
                return dp[n];
            }
        }
        if(j%2) i+=4;
        else i+=2;
    }
    if(n>1){
        dp[n].push_back(n);
        return dp[n];
    }
}

int main(){
    long long n;
    while(scanf("%lld",&n),n){
        long long send=n;
        vector<long long>v;
        if(n<0) send=-n;
        v=factor(send);
        printf("%lld = ",n);
        if(n<0) printf("-1 x %lld",v[0]);
        else printf("%lld",v[0]);
        for(int i=1;i<v.size();i++)
            printf(" x %lld",v[i]);
        printf("\n");
    }
    return 0;
}
