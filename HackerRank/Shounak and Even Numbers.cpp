#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long k;
        scanf("%lld",&k);

        long long from = (k*(k-1))/2;
        long long to = from+k-1;
        long long sum = (to*(to+1))/2 - (from*(from-1))/2;

        printf("%lld\n",2*sum);
    }

    return 0;
}
