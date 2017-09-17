#include <stdio.h>

int main(){
    int z,t;
    scanf("%d",&t);
    int ara[3]={0,0,1};
    for(z=0;z<t;z++){
        long long a,b,ans1,ans2,ans,h1,h2;
        scanf("%lld %lld",&a,&b);
        a--;
        h1=a/3,h2=b/3;
        ans1=h1*2+ara[a%3],ans2=h2*2+ara[b%3];
        ans=ans2-ans1;
        printf("Case %d: %lld\n",z+1,ans);
    }
    return 0;
}
