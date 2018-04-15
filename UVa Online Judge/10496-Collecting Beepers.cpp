#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0)
        return -n;
    return n;
}

int manhattan_dist(int x1, int y1, int x2, int y2){
    return absolute(x1-x2) + absolute(y1-y2);
}

int calculate(const vector<pair<int, int> >& v, int sx, int sy){
    int ans = manhattan_dist(sx, sy, v[v.size()-1].first, v[v.size()-1].second);

    for(int i=0; i<v.size(); i++){
        ans += manhattan_dist(sx, sy, v[i].first, v[i].second);
        sx = v[i].first;
        sy = v[i].second;
    }

    return ans;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        int sx, sy;
        int beeps;

        scanf("%d%d%d",&sx,&sy,&beeps);

        vector<pair<int, int> >v;

        while(beeps--){
            int x, y;
            scanf("%d%d",&x,&y);
            v.push_back(make_pair(x,y));
        }

        sort(v.begin(), v.end());

        int ans = INT_MAX;

        do{
            int ret = calculate(v, sx, sy);
            ans = min(ans, ret);
        }while(next_permutation(v.begin(), v.end()));

        printf("The shortest path has length %d\n",ans);
    }

    return 0;
}
