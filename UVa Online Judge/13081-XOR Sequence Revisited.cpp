#include <bits/stdc++.h>
using namespace std;

long long check(long long n){
    if(n%4==0)
        return n+1;
    if((n-1)%4==0)
        return 0;
    if((n-2)%4==0)
        return n;
    if((n-3)%4==0)
        return 1;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long l,r,val;
        scanf("%lld %lld",&l,&r);

        if(r-l>2){
            puts("0");
            continue;
        }

        long long ans=check(l);

        for(int i=l+1; i<=r; i++){
            ans&=check(i);
        }

        printf("%lld\n",ans);
    }
    return 0;
}
