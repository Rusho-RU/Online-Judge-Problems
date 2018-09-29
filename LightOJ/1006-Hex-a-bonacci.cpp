#include <bits/stdc++.h>
using namespace std;

#define MAX 10010

int main(){
    int t, Case=0;
    long long fib[MAX];
    scanf("%d",&t);

    while(t--){
        long long sum=0;

        for(int i=0; i<6; i++){
            scanf("%lld",&fib[i]);
            sum+=fib[i];
        }

        int n;
        scanf("%d",&n);ghg

        fib[6] = sum;

        for(int i=7; i<=n; i++){
            fib[i] = 2*fib[i-1] - fib[i-7];
        }

        printf("Case %d: %lld\n",++Case,fib[n]);
    }

    return 0;
}
