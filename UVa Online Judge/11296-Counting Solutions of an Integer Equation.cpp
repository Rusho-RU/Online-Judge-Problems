#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        long long s=n/2+1,ans;
        if(s&1) ans=((s+1)/2)*s;
        else ans=(s/2)*(s+1);
        printf("%lld\n",ans);
    }
    return 0;
}
