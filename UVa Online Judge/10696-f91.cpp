#include <bits/stdc++.h>
using namespace std;

long long f91(long long n){
    if(n>=101) return n-10;
    f91(f91(n+11));
}

int main(){
    long long n;
    while(scanf("%lld",&n),n){
        printf("f91(%d) = ",n);
        if(n<=100) printf("91\n");
        else printf("%d\n",n-10);
    }
    return 0;
}
