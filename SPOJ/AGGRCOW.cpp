#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

int dist[MAX];

bool ok(int mid, int n, int c){
    int curr = dist[0], cnt = 1;

    for(int i=1; i<n; i++){
        if(dist[i]-curr >= mid){
            cnt++;
            curr = dist[i];
        }
    }

    return cnt>=c;
}

int solve(int n, int c){
    int lo = 0, hi = 1e9+10, mid;

    while(lo < hi-1){
        mid = (lo+hi)/2;

        if(ok(mid, n, c))
            lo = mid;
        else
            hi = mid-1;
    }

    return ok(hi, n, c) ? hi : lo;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, c;
        scanf("%d %d",&n, &c);

        for(int i=0; i<n; i++)
            scanf("%d",&dist[i]);

        sort(dist, dist+n);

        int ans = solve(n, c);

        printf("%d\n",ans);
    }

    return 0;
}
