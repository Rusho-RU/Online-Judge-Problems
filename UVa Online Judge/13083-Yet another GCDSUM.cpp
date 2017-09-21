#include <bits/stdc++.h>
using namespace std;

long long power(long long n, long long m){
    long long p=1;
    for(int i=1;i<=m;i++)
        p*=n;

    return p;
}

long long f(long long n, long long k){
    long long sum=0;
    for(int i=0;i<=k;i++)
        sum+=((power(n,i)-1)/(n-1))+(k-i+1)*power(n,i);

    return sum;
}

long long factors(long long n){
    long long i,friq=0,tot=1,j;
    while(n%2==0){
        friq++;
        n/=2;
    }

    tot*=f(2,friq),friq=0;

    while(n%3==0){
        friq++;
        n/=3;
    }

    tot*=f(3,friq),friq=0;

    while(n%5==0){
        friq++;
        n/=5;
    }

    tot*=f(5,friq),friq=0;

    for(i=7,j=1;i*i<=n;j++){
        friq=0;
        while(!(n%i)){
            friq++;
            n/=i;
        }
        tot*=f(i,friq);
        if(j%2) i+=4;
        else i+=2;
    }
    if(n!=1){
        tot*=f(n,1);
    }
    return tot;
}

int main(){
    int test;
    scanf("%d",&test);
    for(int Case=1;Case<=test;Case++){
        long long n;
        scanf("%lld",&n);
        printf("Case %d: %lld\n",Case,factors(n));
    }
    return 0;
}
