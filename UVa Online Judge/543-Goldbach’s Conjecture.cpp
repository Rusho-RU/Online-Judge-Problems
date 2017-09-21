#include <bits/stdc++.h>
using namespace std;
#define limit 1000001
int main(){
    map<int,bool>prime;
    int l=sqrt(1000001)+1;
    prime[3]=true,prime[2]=true;
    for(int x=1;x<l;x++)
        for (int y=1;y<l;y++){
            int n=(4*x*x)+(y*y);
            if (n<=limit && (n%12==1 || n%12==5))
                prime[n]^=true;

            n=(3*x*x)+(y*y);
            if(n<=limit && n%12==7)
                prime[n]^=true;

            n=(3*x*x)-(y*y);
            if(x>y && n<=limit && n%12==11)
                prime[n]^=true;
        }
    for(int r=5;r<l;r++)
        if(prime[r])
            for(int i=r*r;i<limit;i+=r*r)
                prime[i]=false;
    int n;
    while(scanf("%d",&n),n){
        int i;
        int l1=n/2;
        for(i=n-1;i>=l1;i-=2){
            if(prime[i] && prime[n-i]){
                printf("%d = %d + %d\n",n,n-i,i);
                break;
            }
        }
        if(i<l1) printf("%d = 0 + %d\n",n,n);
    }
    return 0;
}
