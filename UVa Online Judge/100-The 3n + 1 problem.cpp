#include <bits/stdc++.h>
using namespace std;
int dp[268435455];

int ackermann(int n){
    if(dp[n]!=0)
        return dp[n];
    if(n==1)
        return 1;
    int ans=n%2 ? 3*n+1 : n/2;
    return dp[n]=ackermann(ans)+1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l,h,temp;
    while(cin>>l>>h){
        int a=l,b=h,i,j,count,max=0,rem,n;
        if(l>h) swap(l,h);
        for(i=l;i<=h;i++){
            count=ackermann(i);
            if(count>max)
                max=count;
        }
        printf("%d %d %d\n",a,b,max);
    }
    return 0;
}
