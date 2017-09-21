#include <stdio.h>
#include <math.h>
int main(){
    long long a,b,d;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        d=a-b;
        printf("%lld\n",((d<0)*-d)+(!(d<0)*d));
    }
    return 0;
}
