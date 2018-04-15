#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;

    while(scanf("%d%d",&n,&m)==2){
        int data;
        int cnt[n+1];

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<m; i++){
            scanf("%d",&data);
            cnt[data]++;
        }

        int ans = INT_MAX;

        for(int i=1; i<=n; i++)
            ans = min(ans, cnt[i]);

        printf("%d\n",ans);
    }

    return 0;
}
