#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        int n,k,p,ans;
        scanf("%d %d %d",&n,&k,&p);
        if(p<=n)
            ans=k+p;
        else
            ans=k+p%n;
        if(ans>n)
            ans-=n;
        printf("Case %d: %d\n",z+1,ans);
    }
    return 0;
}
