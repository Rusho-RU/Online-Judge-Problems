#include <bits/stdc++.h>
using namespace std;
long long A,B,C;

long long f(long long n){
    printf("%lld\n",n);
    if(n<=2) return 0;
    return ((A*f(n-1))%10007+(B*f(n-3))%10007+C);
}

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        long long n,a,b,c;
        scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
        A=a,B=b,C=c;
        long long ans=f(n);
        printf("Case %d: %lld\n",z+1,ans);
    }
    return 0;
}
