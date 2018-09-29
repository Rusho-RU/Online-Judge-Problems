#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        long long prefix[n+1], value;
        prefix[0] = 0;

        for(int i=0; i<n; i++){
            scanf("%lld",&value);
            prefix[i+1] = prefix[i] + value;
        }

        sort(prefix, prefix+n+1);

        long long ans = 0;

        for(int i=1; i<=n; i++){
            long long cnt=1;
            while(prefix[i]==prefix[i-1])
                cnt++, i++;
            ans += (cnt*(cnt-1))/2;
        }

        printf("%lld\n",ans);
    }

    return 0;
}
