#include <bits/stdc++.h>
using namespace std;

struct type{
    long long x,y;
};

long long gcd;

void egcd(long long a, long long b, long long *x, long long *y){
    if(a%b==0){
        *x=0,*y=1;
        gcd=b;
        return;
    }

    long long x1,y1;
    egcd(b,a%b,&x1,&y1);
    *y=x1-y1*(a/b);
    *x=y1;
    return;
}

int main(){
    long long a,b;
    while(scanf("%lld %lld",&a,&b)==2){
        type ans;
        if(!a && !b) ans.x=1,ans.y=0,gcd=b;
        else if(!a) ans.x=0,ans.y=1,gcd=b;
        else if(!b) ans.x=1,ans.y=0,gcd=a;
        else if(a==b && a && b) ans.x=0,ans.y=1,gcd=a;
        else{
            egcd(a,b,&ans.x,&ans.y);
        }

        printf("%lld %lld %lld\n",ans.x,ans.y,gcd);
    }
    return 0;
}
