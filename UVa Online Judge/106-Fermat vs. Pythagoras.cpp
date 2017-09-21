#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%lld",&n)==1){
        long long a,b,c,x,y,z,ans1=0,ans2=n;
        bool pythagorus[1000001]={};
        for(int i=1;i*i<=n;i++){
            for(int j=i+1;j*j<=n;j+=2){
                if(__gcd(i,j)==1){
                    x=a=j*j-i*i;
                    y=b=2*i*j;
                    z=c=i*i+j*j;
                    if(c>n) break;
                    while(z<=n){
                        if(!pythagorus[x]) ans2--;
                        if(!pythagorus[y]) ans2--;
                        if(!pythagorus[z]) ans2--;
                        pythagorus[x]=pythagorus[y]=pythagorus[z]=true;
                        x+=a,y+=b,z+=c;
                    }
                    ans1++;
                }
            }
        }
        printf("%lld %lld\n",ans1,ans2);
    }
    return 0;
}
