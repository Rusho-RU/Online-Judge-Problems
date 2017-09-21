#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        long long q,chimp[n];

        for(int i=0;i<n;i++)
            scanf("%lld",&chimp[i]);

        int query;
        scanf("%d",&query);

        while(query--){
            scanf("%lld",&q);
            int l=0,h=n-1,m;

            while(l<=h){
                m=(l+h)>>1;
                if(chimp[m]>=q) h=m-1;
                else l=m+1;
            }

            if(h==-1) printf("X ");
            else printf("%lld ",chimp[h]);

            /*l=h+1,h=n-1;
            while(l<=h){
                m=(l+h)>>1;
                if(chimp[m]<=q) l=m+1;
                else h=m-1;
            }*/

            int i;
            for(i=h+1;i<n;i++)
                if(chimp[i]!=q) break;

            if(i==n) puts("X");
            else printf("%lld\n",chimp[i]);
        }
    }
    return 0;
}
