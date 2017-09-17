#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0) return -n;
    return n;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,val;
        scanf("%d",&n);
        vector<int>v;
        int l=n/2;
        long long MAX=0, MIN=0;

        for(int i=0;i<n;i++){
            scanf("%d",&val);
            v.push_back(val);
        }

        sort(v.begin(),v.end());

        for(int i=0, j=n-1;i<l;i++,j--)
            MAX+=absolute(v[j]-v[i]);

        for(int i=n-1;i>0;i-=2){
            MIN+=absolute(v[i]-v[i-1]);
        }

        printf("%lld %lld\n",MIN,MAX);
    }
    return 0;
}
