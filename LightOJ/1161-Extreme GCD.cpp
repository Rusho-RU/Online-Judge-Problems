#include <bits/stdc++.h>
using namespace std;

int gcd(int u, int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do{
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t=v;
            v=u;
            u=t;
        }
        v=v-u;
    } while (v!=0);
    return u << shift;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        int n,i,j;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(gcd(i,j)==1)
                    count++;
            }
        }
        printf("Case %d: %d\n",z+1,count);
    }
    return 0;
}
