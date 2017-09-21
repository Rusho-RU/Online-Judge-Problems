#include <bits/stdc++.h>
using namespace std;

long long phi(long long n){
    if(n==1) return 1;
    long long result=n,count,tot=1;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            count=0;
            while(n%i==0){
                n/=i;
                count++;
            }
            result-=result/i;
            tot*=count+1;
        }
    }
    if(n>1){
        result-=result/n;
        tot*=2;
    }
    result--;
    return result+tot;
}

int main(){
    long long n;
    while(scanf("%lld",&n)==1){
        printf("%lld\n",n-phi(n));
    }
    return 0;
}


