#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, a, b;
        scanf("%d %d %d",&n,&a,&b);

        int na = 0, nb = 0;

        for(int i=0; i<n; i++){
            int val;
            scanf("%d",&val);
            if(val==a) na++;
            if(val==b) nb++;
        }

        if(a==b)
            na=nb;

        double pa = (double)na/n;
        double pb = (double)nb/n;

        double p = pa * pb;

        printf("%.10lf\n",p);
    }

    return 0;
}
