#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        long long n;
        scanf("%lld",&n);
        long long s=sqrt(n),r,c,temp,floor=s*s,ceil=(s+1)*(s+1);
        if(floor==n)
            c=s,r=1;
        else{
            long long check=((ceil+floor)+1)/2;
            if(n<=check)
                c=s+1,r=n-floor;
            else
                c=ceil-n+1,r=s+1;
        }
        if(ceil%2==0){
            temp=c;
            c=r;
            r=temp;
        }
        printf("Case %d: %lld %lld\n",z+1,c,r);
    }
    return 0;
}

