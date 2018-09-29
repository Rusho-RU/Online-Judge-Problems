#include <bits/stdc++.h>
using namespace std;

int main(){
    long long fib[41];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<41; i++)
        fib[i] = fib[i-1] + fib[i-2];

    int n;
    while(scanf("%d",&n)==1){
        for(int i=n; i>0; i--){
            printf("%lld",fib[i]);
            if(i==1)
                puts("");
            else
                printf(" ");
        }
    }

    return 0;
}
