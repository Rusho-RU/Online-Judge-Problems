#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,i=0;
    while(scanf("%lld",&n)==1){
        long long sub=n%10000000,hold,m=n;
        n=n/10000000;
        i++;
        printf("%4.0lld.",i);
        if(n){
            hold=n/10000000;
            n%=10000000;
            if(hold) printf(" %lld kuti",hold);
            hold=n/100000;
            n%=100000;
            if(hold) printf(" %lld lakh",hold);
            hold=n/1000;
            n%=1000;
            if(hold) printf(" %lld hajar",hold);
            hold=n/100;
            n%=100;
            if(hold) printf(" %lld shata",hold);
            if(n) printf(" %lld kuti",n);
            else printf(" kuti");
        }

        hold=sub/100000;
        sub%=100000;
        if(hold) printf(" %lld lakh",hold);
        hold=sub/1000;
        sub%=1000;
        if(hold) printf(" %lld hajar",hold);
        hold=sub/100;
        sub%=100;
        if(hold) printf(" %lld shata",hold);
        if(sub) printf(" %lld",sub);
        if(!m) printf(" 0");
        printf("\n");
    }
    return 0;
}
