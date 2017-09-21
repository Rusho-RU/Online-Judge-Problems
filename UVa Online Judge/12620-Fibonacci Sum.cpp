#include <bits/stdc++.h>
using namespace std;

#define MAX 300

int fib[MAX+1],sum[MAX+1];

void fibonacci(){
    fib[0]=0,fib[1]=fib[2]=1;
    sum[0]=0,sum[1]=1,sum[2]=2;

    for(int i=3;i<=MAX;i++){
        fib[i]=((fib[i-1]%100)+(fib[i-2]%100))%100;
        sum[i]=sum[i-1]+fib[i];
    }
    return;
}

long long f(long long n){
    long long div=n/MAX;
    int rem=n%MAX;
    long long ans=div*sum[MAX];
    ans+=sum[rem];
    return ans;
}

int main(){
    fibonacci();
    int a=0;
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,m;
        scanf("%lld %lld",&n,&m);
        long long ans=f(m)-f(n-1);
        printf("%lld\n",ans);
    }
    return 0;
}
