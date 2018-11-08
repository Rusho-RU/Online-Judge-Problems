#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    for(long long i=3; i*i<=n; i+=2)
        if(n%i==0)
            return false;
    return true;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long a, b;
        scanf("%I64d%I64d",&a,&b);

        if((a-b)==1 && isPrime(a+b))
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
