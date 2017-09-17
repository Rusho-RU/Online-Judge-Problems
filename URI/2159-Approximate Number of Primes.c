#include <stdio.h>
#include <math.h>

void main(){
    long int n;
    scanf("%ld",&n);
    double p,q;
    double a=(2.302585093*log10(n));
    p=n/a;
    q=(1.25506*n)/a;
    printf("%.1lf %.1lf\n",p,q);
}
