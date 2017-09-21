#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000000000

long long f1(long long p, long long k){
    long long sum=k+1,hold=1;
    for(int i=1;i<=k;i++){
        hold*=p;
        sum+=((hold-1)/(p-1))+(k-i+1)*hold;
    }
    return sum;
}

long long f2(long long p, long long k, long long po){
    long long sum=0;
    sum=(po*p*(p+1)-3*p+2*k-2*k*p+1)/((p-1)*(p-1));
    return sum;
}

long long factors(long long n){
    long long i=2,friq=0,tot=1,j,rem=n;
    while(n%2==0){
        friq++;
        n/=2;
    }

    if(friq==1) tot*=(i+3);
    else if(friq){
        long long hold=rem/n;
        if(hold<MAX) tot*=f2(i,friq,hold);
        else tot*=f1(i,friq);
    }

    i=3,friq=0,rem=n;

    while(n%3==0){
        friq++;
        n/=3;
    }

    if(friq==1) tot*=(i+3);
    else if(friq){
        long long hold=rem/n;
        if(hold<MAX) tot*=f2(i,friq,hold);
        else tot*=f1(i,friq);
    }

    i=5,friq=0,rem=n;

    while(n%5==0){
        friq++;
        n/=5;
    }

    if(friq==1) tot*=(i+3);
    else if(friq){
        long long hold=rem/n;
        if(hold<MAX) tot*=f2(i,friq,hold);
        else tot*=f1(i,friq);
    }

    for(i=7,j=1;i*i<=n;j++){
        friq=0,rem=n;
        while(!(n%i)){
            friq++;
            n/=i;
        }
        if(friq==1) tot*=(i+3);
        else if(friq){
            long long hold=rem/n;
            if(hold<MAX) tot*=f2(i,friq,hold);
            else tot*=f1(i,friq);
        }
        if(j%2) i+=4;
        else i+=2;
    }
    if(n!=1){
        tot*=(n+3);
    }
    return tot;
}

int main(){
    int test;
    scanf("%d",&test);
    for(int Case=1;Case<=test;Case++){
        long long n;
        scanf("%lld",&n);
        long long ans=factors(n);
        printf("Case %d: %lld\n",Case,ans);
    }
    return 0;
}

