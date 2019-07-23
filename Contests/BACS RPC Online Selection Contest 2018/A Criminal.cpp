#include <bits/stdc++.h>
using namespace std;

long long howMany(long long n, long long value){
    if(n==0 || n<value || (n==5 && value==5)) return 0;
    long long hasOne = floor(log2(n)) + 1;
    if(value==1)
        return hasOne;
    hasOne--;
    long long num = floor(log2((value-1)/2));
    return hasOne - num;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        long long x,l,n;
        scanf("%lld %lld %lld",&x, &l, &n);

        printf("Case %d: ",++Case);

        if(n==1){
            puts("1/1");
            continue;
        }

        long long pEvent = 0, allEvent = n-l+1;
        if(x>l)
            pEvent = x-l;

        if(x%2){
            long long R = howMany(n, x);
            long long L = howMany(l-1, x);

            pEvent+=R-L;
        }

        if(pEvent==0){
            puts("0/1");
            continue;
        }

        long long gcd = __gcd(pEvent, allEvent);
        pEvent/=gcd;
        allEvent/=gcd;

        printf("%lld/%lld\n",pEvent, allEvent);
    }

    return 0;
}
