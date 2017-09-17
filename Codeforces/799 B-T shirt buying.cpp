#include <bits/stdc++.h>
using namespace std;

struct info{
    long long price;
    int a,b;
};

bool comp(const info &a, const info &b){
    if(a.a==b.a){
        if(a.b==b.b){
            return a.price<b.price;
        }
        else return a.b<b.b;
    }
    else return a.a<b.a;
}

int main(){
    int n;
    while(scanf("%d",&n)==1){
        info v[n];
        bool avail[n];
        memset(avail,true,sizeof avail);
        for(int i=0;i<n;i++)
            scanf("%I64d",&v[i].price);

        for(int i=0;i<n;i++)
            scanf("%d",&v[i].a);

        for(int i=0;i<n;i++)
            scanf("%d",&v[i].b);

        sort(v,v+n,comp);

        int m,x;
        scanf("%d",&m);
        while(m--){
            scanf("%d",&x);
            int i;
            for(i=0;i<n;i++){
                if(!avail[i]) continue;
                if(v[i].a==x || v[i].b==x)
                    break;
                else if(v[i].a>x && v[i].b>x)
                    break;
            }

            if(v[i].a==x || v[i].b==x){
                printf("%I64d",v[i].price);
                avail[i]=false;
            }
            else printf("-1");
            if(m) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
