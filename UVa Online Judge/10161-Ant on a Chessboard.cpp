#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    while(scanf("%lld",&t),t){
        long long s=sqrt(t),r,c,temp,floor=s*s,ceil=(s+1)*(s+1);
        if(floor==t)
            c=s,r=1;
        else{
            long long check=((ceil+floor)+1)/2;
            if(t<=check)
                c=s+1,r=t-floor;
            else
                c=ceil-t+1,r=s+1;
        }
        if(ceil%2==0){
            temp=c;
            c=r;
            r=temp;
        }
        printf("%lld %lld\n",c,r);
    }
    return 0;
}
