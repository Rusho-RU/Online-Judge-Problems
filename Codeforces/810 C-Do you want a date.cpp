#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long f(long long n){
    if(n<0) return -n;
    return n;
}

bool comp(long long a, long long b){
    return a>b;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        long long val,m,sum=0;
        vector<long long>v;

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            v.push_back(val);
        }

        sort(v.begin(),v.end(),comp);
        int s=v.size()-1;
        sum=v[0]-v[1];

        for(int i=2;i<v.size();i++)
            sum=(sum%MOD + ((i-1)*(v[0]-v[i]))%MOD);

        printf("%I64d\n",sum);
    }
}
