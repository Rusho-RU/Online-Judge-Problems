#include <bits/stdc++.h>
using namespace std;

int main(){
    long long fib[85];
    int n;

    fib[1] = 1, fib[2] = 2, fib[3] = 3;

    for(int i=4; i<85; i++)
        fib[i] = fib[i-1] + fib[i-2];

    while(scanf("%d",&n) && n)
        printf("%lld\n",fib[n]);

    return 0;
}
