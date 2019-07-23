#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, m;
        scanf("%d %d",&n,&m);

        vector<pair<int, int> >v;

        for(int i=0; i<m; i++){
            int a,b;
            scanf("%d%d",&a,&b);
            v.push_back(make_pair(a,b));
        }

        sort(v.begin(), v.end());
        int time = 0;
        bool possible = true;

        for(int i=0; i<m; i++){
            if(time+v[i].second > v[i].first){
                possible = false;
                break;
            }

            time+=v[i].second;
        }

        if(possible)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
