#include <bits/stdc++.h>
using namespace std;

map<long long, long long>m;

long long fib(long long a, long long b, long long n);

int main(){
    long long n;
    scanf("%lld",&n);
    fib(0,1,n);
}

long long fib(long long a, long long b, long long n){
    long long c;
    if(n==1)
        return a+b;
    c=fib(b,a+b,n-1)%1000000000;
    printf("%lld\n",c);
    return c;
}
