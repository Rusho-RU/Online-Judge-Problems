#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long n,a,b;
        scanf("%lld %lld %lld",&n,&a,&b);

        long long x = round(1.0*n*b/(a+b));
        long long y = n - x;

        printf("%lld\n",a*x*x + b*y*y);
    }

    return 0;
}
