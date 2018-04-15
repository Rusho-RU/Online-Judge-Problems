#include <bits/stdc++.h>
using namespace std;

int extended_gcd(unsigned long long a, unsigned long long b, unsigned long long *x, unsigned long long *y){
    if(a==0){
        *x = 0;
        *y = 1;
        return b;
    }

    unsigned long long x1, y1;
    unsigned long long gcd = extended_gcd(b%a, a, &x1, &y1);

    *x = y1 - (b/a)*x1;
    *y = x1;

    return gcd;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        unsigned long long m;
        scanf("%ull",&m);
        unsigned long long x, y;

        unsigned long long gcd = extended_gcd(2LL, m, &x, &y);
        if(gcd!=1)
            puts("-1");
        else{
            x = (x%m + m)%m;
            printf("%ull\n",x);
        }
    }
}
