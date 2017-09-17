#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        long long piece,pos,prev=0,nim=0;
        scanf("%lld",&piece);
        for(long long i=1;i<=2*piece;i++){
            scanf("%lld",&pos);
            if(i%2==0)
                nim^=(pos-prev-1);
            prev=pos;
        }

        printf("Case %d: ",Case);
        if(nim) printf("Alice\n");
        else printf("Bob\n");
    }
    return 0;
}
