#include <bits/stdc++.h>
using namespace std;

#define MAX 50

bool not_prime[MAX+1];
long long rem[16];

void sieve(){
    for(int i=4;i<=MAX;i+=2)
        not_prime[i]=true;

    for(int i=9;i<=MAX;i+=6)
        not_prime[i]=true;

    for(int i=25;i<=MAX;i+=10)
        not_prime[i]=true;

    for(int i=7,k=1;i*i<=MAX;k++){
        if(!not_prime[i])
            for(int j=i*i;j<=MAX;j+=i*2)
                not_prime[j]=true;
        if(k%2) i+=4;
        else i+=2;
    }
}

void Insert(){
    long long mul=1;
    int i,j=1;
    rem[0]=1;
    for(i=1;i<=MAX;i++){
        if(!not_prime[i]){
            mul*=i;
            rem[j++]=mul;
            if(j==16)
                break;
        }
    }
}

int main(){
    not_prime[1]=true;
    sieve();
    Insert();
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        int i;
        scanf("%lld",&n);
        for(i=0;i<16;i++)
            if(rem[i]>=n) break;
        printf("%d\n",i-(rem[i]!=n));
    }
    return 0;
}
