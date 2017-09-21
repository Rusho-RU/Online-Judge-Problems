#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001
bool not_prime[MAX];

void sieve(){
    long long i,j,k;
    for(i=4;i<=MAX;i+=2)
        not_prime[i]=true;

    for(i=6;i<=MAX;i+=3)
        if(!not_prime[i]) not_prime[i]=true;

    for(i=10;i<=MAX;i+=5)
        if(!not_prime[i]) not_prime[i]=true;

    for(i=7,k=0;i*i<=MAX;k++){
        if(!not_prime[i])
            for(j=i*2;j<=MAX;j+=i)
                not_prime[j]=true;
        if(k%2) i+=2;
        else i+=4;
    }
}

int main(){
    //sieve();
    int t;
    scanf("%d",&t);
    long long x,y;
    while(t--){
        scanf("%lld %lld",&x,&y);
        y-=2;
        long long num=x-y;
        if(!x && x<y) printf("Impossible");
        else if(x==y) printf("%lld\n",x+1);
        //else if(!not_prime[num]) printf("%lld\n",num);
        else{
            long long i,ans=10e12+1;
            bool found=false;
            for(i=1;i*i<=num;i++){
                if(num%i==0){
                    long long hold=num/i;
                    if(i>y && i<ans) ans=i,found=true;
                    if(hold>y && hold<ans) ans=hold;
                }
                if(found && i>ans) break;
            }
            if(ans==10e12+1) printf("Impossible\n");
            else printf("%lld\n",ans);
        }
    }
    return 0;
}
