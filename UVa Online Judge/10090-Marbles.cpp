#include <bits/stdc++.h>
using namespace std;

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
    long long x, y;

    egcd(3, -2, &x, &y);

    cout<<x<<" "<<y<<" "<<gcd<<endl;

    long long n;
    while(scanf("%lld",&n) && n){
        long long c1,n1,c2,n2,x,y;
        scanf("%lld %lld %lld %lld",&c1,&n1,&c2,&n2);

        egcd(n1,n2,&x,&y);

        long long low=ceil(-1.0*x*n/n2), up=floor(1.0*y*n/n1);

        if(n%gcd || low>up){
            printf("failed\n");
            continue;
        }

        if(c1*n2<n1*c2){
            x=x*n/gcd+n2/gcd*up;
            y=y*n/gcd-n1/gcd*up;
        }

        else{
            x=x*n/gcd+n2/gcd*low;
            y=y*n/gcd-n1/gcd*low;
        }

        printf("%lld %lld\n",x,y);
    }

    return 0;
}
