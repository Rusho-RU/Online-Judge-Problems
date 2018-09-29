#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;

    while(scanf("%I64d %I64d %I64d",&n,&m,&k)==3){
        if(k<n){
            printf("%I64d 1\n",k+1);
            continue;
        }

        k-= (n-1);

        long long ans_n = k/(m-1);
        if(k%(m-1)) ans_n++;

        long long ans_m;

        if(ans_n&1){
            ans_m = m - (ans_n*(m-1) - k + 1) + 1;
        }

        else{
            ans_m = ans_n*(m-1) - k + 2;
        }

        ans_n = n - ans_n + 1;
        printf("%I64d %I64d\n",ans_n, ans_m);
    }

    return 0;
}
