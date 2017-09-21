#include <bits/stdc++.h>
using namespace std;
#define limit 10000
long long BigMod(long long a, long long b, long long MOD){
    if(b==0)
        return 1;

    if(b%2==0){
        long long c=BigMod(a,b/2,MOD);
        return c*c%MOD;
    }
    else
        return (a*BigMod(a,b-1,MOD))%MOD;
}

int main(){
    map<int,bool>prime;
    prime[3]=true,prime[2]=true;
    int l=sqrt(limit+1);
    for(int x=1;x<=l;x++)
        for (int y=1;y<=l;y++){
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
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(!a || !b){
            if(!a && prime[b] && b%4==3)
                printf("P\n");
            else if(!b && prime[a] && a%4==3)
                printf("P\n");
            else
                printf("C\n");
        }

        else{
            long long hold=a*a+b*b;
            if(BigMod(2,hold,hold)==2)
                printf("P\n");
            else
                printf("C\n");
        }
    }
    return 0;
}
