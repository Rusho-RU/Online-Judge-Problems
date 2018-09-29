#include <bits/stdc++.h>
using namespace std;

int minute_of(int h, int m){
    return h*60+m;
}

int main(){
    int n, s;

    while(scanf("%d%d",&n,&s)==2){
        vector<pair<int, int> >v;

        for(int i=0; i<n; i++){
            int h,m;
            scanf("%d %d",&h,&m);
            v.push_back(make_pair(h,m));
        }

        if(minute_of(v[0].first, v[0].second) - 1 >= s){
            puts("0 0");
            continue;
        }

        int required = 2*s + 1;
        int index = -1;

        for(int i=1; i<n; i++){
            int diff = minute_of(v[i].first, v[i].second) - minute_of(v[i-1].first, v[i-1].second) - 1;
            if(diff>=required){
                index = i-1;
                break;
            }
        }

        if(index!=-1){
            int ans = minute_of(v[index].first, v[index].second) + 1 + s;
            printf("%d %d\n", ans/60, ans%60);
            continue;
        }

        int ans = minute_of(v[n-1].first, v[n-1].second) + s + 1;
        printf("%d %d\n", ans/60, ans%60);
    }

    return 0;
}
