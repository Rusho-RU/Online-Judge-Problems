#include <bits/stdc++.h>
using namespace std;

struct type{
    long long low,high;
}info[8];

long long count,K,sum,limit;

void combination(int n){
    if(n==K){
        sum+=info[n].high;
        info[n].high--;
        if(sum==limit) count++;
        return;
    }
    if(n==1){
        sum=info[n].high;
    }
    sum+=info[n].high;
    info[n].high--;
    n--;
    combination(n);
}

int main(){
    int k,long long n;
    while(scanf("%d%lld",&k,&n)==2){
        count=0,K=k,limit=n;
        for(int i=1;i<=k;i++)
            scanf("%lld %lld",&department[i].low,&department[i].high);
        combination(1);
    }
}
