#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,sum=0;
        scanf("%lld",&n);
        sum=((n%MOD)*(n%MOD))%MOD;
        printf("%lld\n",sum);
    }
    return 0;
}
