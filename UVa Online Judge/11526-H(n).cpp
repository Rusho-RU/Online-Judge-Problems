#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll H(int n){
    ll ans=0;
    int root=(int)sqrt((double)n);
    for(int i=1;i<=root;i++){
        ans=ans+n/i;
    }

    return ans*2-root*root;
}

int main(){
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ll ans=H(n);
        printf("%lld\n",ans);
    }
    return 0;
}
