#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    scanf("%lld",&a);
    if(a&1){
        b=(a*a-1)/2;
        c=b+1;
    }

    else{
        b=(a*a)/4-1;
        c=b+2;
    }
    printf("%lld %lld %lld\n",a,b,c);
    return 0;
}
