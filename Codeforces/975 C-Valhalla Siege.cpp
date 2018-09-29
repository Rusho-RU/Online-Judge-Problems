#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;

    while(scanf("%d %d",&n,&q)==2){
        long long power[n], arrow[q];

        for(int i=0; i<n; i++) scanf("%I64d",&power[i]);

        for(int i=0; i<q; i++) scanf("%I64d",&arrow[i]);

        long long prefix[n];
        prefix[0] = power[0];

        for(int i=1; i<n; i++)
            prefix[i] = prefix[i-1] + power[i];

        int died = 0;
        long long p=0;

        for(int i=0; i<q; i++){
            p+=arrow[i];

            int index = lower_bound(prefix+died, prefix+n, p+1) - prefix;

            if(index==n){
                died = 0;
                p = 0;
                printf("%d\n",n);
            }

            else{
                died = index;
                printf("%d\n",n - died);
            }
        }
    }

    return 0;
}
