#include <bits/stdc++.h>
using namespace std;

long double sqrt(long double t) {
        long double r = t/2;
        for (int i=0;r&t;i++) {
                r = (r+t/r)/2;
        }
        return r;
}

int main(){
    long long n;
    while(scanf("%lld",&n),n){
        //double hold=sqrt((n*(n*n-1))/(3.0*n-3));
        //printf("%lf\n",hold);
        printf("%lf\n",sqrt(n));
    }
    return 0;
}
