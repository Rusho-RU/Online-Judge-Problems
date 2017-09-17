#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int ab[1100];

    while(t--){
        int n,A,B,C,D,ans=0;
        scanf("%d%d%d%d%d",&n,&A,&B,&C,&D);

        for(int i=0;i<=n;i++) ab[i]=0;

        for(int b=0;b<=B && 2*b<=n;b++){
            for(int a=0;a<=A && a+2*b<=n;a++){
                ab[a+2*b]++;
            }
        }

        for(int c=0;c<=C && 5*c<=n;c++){
            for(int d=0;d<=D && 5*c+10*d<=n;d++){
                ans+=ab[n-5*c-10*d];
            }
        }

        printf("%d\n",ans);
    }

    return 0;
}
