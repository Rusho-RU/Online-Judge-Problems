#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    while(scanf("%lld%lld",&a,&b)==2){
        long long hold=a;
        if(a<2 || b<2 || a<b)
            printf("Boring!\n");

        else{
            double n1=log10(a),n2=log10(b),n=n1/n2,dif1=ceil(n)-n,dif2=n-floor(n);
            if(dif1<0.000000000000001 || dif2<0.000000000000001){
                printf("%lld",hold);
                for(;hold!=1;){
                    hold/=b;
                    printf(" %lld",hold);
                }
                printf("\n");
            }
            else
                printf("Boring!\n");
        }
    }
    return 0;
}
