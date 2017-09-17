#include <bits/stdc++.h>
using namespace std;

#define MOD 1000

int main(){
    int fib[10001];
    fib[0]=1,fib[1]=2;
    for(int i=2;i<10001;i++)
        fib[i]=((fib[i-1]%MOD)+(fib[i-2]%MOD)) %MOD;
    int n;

    while(scanf("%d",&n)==1)
        printf("%d\n",fib[n]);

    return 0;
}
