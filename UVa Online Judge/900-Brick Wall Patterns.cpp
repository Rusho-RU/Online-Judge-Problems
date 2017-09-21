#include <bits/stdc++.h>
using namespace std;

#define MAX 51

long long fib[MAX];

void fibonacci(){
    fib[0]=1,fib[1]=1;
    for(int i=2;i<MAX;i++)
        fib[i]=fib[i-1]+fib[i-2];
    return;
}

int main(){
    fibonacci();
    int n;
    while(scanf("%d",&n) && n){
        printf("%lld\n",fib[n]);
    }
    return 0;
}
