#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001
bool prime[MAX];

void SimpleSieve(){
    long long i,j,k;
    prime[1]=true;
    for(i=4;i<MAX;i+=2)
        prime[i]=true;

    for(i=6;i<MAX;i+=3)
        prime[i]=true;

    for(i=10;i<MAX;i+=5)
        prime[i]=true;

    i=5;
    for(j=0;i*i<MAX;j++){
        if(j%2) i+=4;
        else i+=2;
        if(!prime[i]){
            for(k=i*i;k<MAX;k+=i)
                prime[k]=true;
        }
    }
}

int main(){
    SimpleSieve();
    map<long long,bool>dp;
    for(long long i=1;i<MAX;i++)
        if(!prime[i])
            dp[i*i]=true;

    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%I64d",&n);
        if(dp[n]) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

