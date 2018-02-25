#include <bits/stdc++.h>
using namespace std;

long long mod=1000000000+7;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        long long ans=1;

        int i;
        for(i=2;i<=n;i++){
            ans=(ans*i)%mod;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
