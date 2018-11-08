#include <bits/stdc++.h>
using namespace std;

#define MAX 13
#define MIN 8

long long factorial(long long n){
    long long ans = 1;

    for(long long i=2; i<=n; i++)
        ans*=i;

    return ans;
}

int main(){
    long long n;

    while(scanf("%lld",&n)==1){
        if(n>=0){
            if(n<MIN)
                puts("Underflow!");
            else if(n>MAX)
                puts("Overflow!");
            else{
                long long ans = factorial(n);
                printf("%lld\n",ans);
            }
        }
        else{
            if(n<0 && (n&1))
                puts("Overflow!");
            else
                puts("Underflow!");
        }
    }

    return 0;
}
