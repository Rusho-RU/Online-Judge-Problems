#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll>dp;

ll ackermann(ll n){
    if(dp[n]!=0) return dp[n];
    ll ans=n%2 ? 3*n+1 : n/2;
    if(ans==1) return 1;
    return dp[n]=ackermann(ans)+1;
}

int main(){
    ll l,h,temp;
    while(scanf("%lld%lld",&l,&h),l,h){
        if(l>h) swap(l,h);
        ll i,j,count,max=0,rem,n;
        for(i=l;i<=h;i++){
            count=ackermann(i);
            if(count>max){
                max=count;
                rem=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,rem,max);
    }
    return 0;
}
