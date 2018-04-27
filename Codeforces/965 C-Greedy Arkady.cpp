#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,m,d;

    while(scanf("%I64d %I64d %I64d %I64d",&n,&k,&m,&d)==4){
        long long ans = -1;

        for(int i=1; i<=d && (i-1)*k+1<=n; i++){
            long long times = (i-1)*k + 1;
            long long per_time = n/times;
            per_time = min(m, per_time);
            ans = max(ans, per_time*i);
        }

        printf("%I64d\n",ans);
    }

    return 0;
}
