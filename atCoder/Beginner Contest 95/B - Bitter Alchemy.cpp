#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;

    while(scanf("%d%d",&n,&x)==2){
        int val, mn = INT_MAX, total=0;

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            total+=val;
            mn = min(mn, val);
        }
        int ans = n;

        x-=total;
        ans += x/mn;

        printf("%d\n",ans);
    }

    return 0;
}
