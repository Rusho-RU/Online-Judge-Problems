#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,c,n;
    scanf("%lld%lld%lld",&t,&c,&n);
    int ans[t];
    memset(ans, 0, sizeof ans);

    for(int i=0; i<n; i++){
        long long x,y,s;
        scanf("%lld%lld%lld",&x,&y,&s);

        for(int j=0; j<t; j++){
            if(y*c - j*c*s == s*x)
                ans[j]++;
        }
    }

    for(int i=0; i<t; i++)
        printf("%d\n",ans[i]);

    return 0;
}
