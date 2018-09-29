#include <bits/stdc++.h>
using namespace std;

#define fasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();

int main(){
    long long n;

    while(scanf("%I64d",&n)==1){
        if(n==0){
            puts("0");
            continue;
        }

        n++;
        if(n&1)
            printf("%I64d\n",n);
        else
            printf("%I64d\n",n/2);
    }

    return 0;
}

