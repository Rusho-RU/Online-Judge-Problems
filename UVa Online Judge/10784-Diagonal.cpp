#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int z=1;;z++){
        long long n;
        scanf("%lld",&n);
        if(!n)
            break;
        else{
            double s=(sqrt(9+8*n)+3)/2;
            printf("Case %d: %0.0lf\n",z,ceil(s));
        }
    }
    return 0;
}
