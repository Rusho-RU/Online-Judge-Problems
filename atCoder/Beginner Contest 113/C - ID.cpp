#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    while(scanf("%d%d",&n,&m)==2){
        vector<pair<int, int> > v[n+1];

        for(int i=0; i<m; i++){
            int c, y;
            scanf("%d %d",&c,&y);

            v[c].push_back(make_pair(y,i));
        }

        pair<int, int>ans[m+1];

        for(int i=1; i<=n; i++){
            sort(v[i].begin(), v[i].end());

            for(int j=0; j<v[i].size(); j++){
                ans[v[i][j].second] = make_pair(i, j+1);
            }
        }

        for(int i=0; i<m; i++)
            printf("%06d%06d\n",ans[i].first, ans[i].second);
    }

    return 0;
}

