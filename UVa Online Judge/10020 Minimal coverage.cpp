#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pii pair<int, int>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int m;
        cin>>m;

        vector<pii>v;
        int l, r;

        while(scanf("%d%d", &l, &r)==2 && l+r){
            if(l<m && r>0)
                v.push_back({l, r});
        }

        int n = v.size();

        sort(all(v));

        vector<pii>ans;
        int hoise=0, i=0;
        pii sol;

        while(hoise < m){
            int mx = hoise;

            while(i<n && v[i].first <= hoise){
                if(v[i].second > mx){
                    mx = v[i].second;
                    sol = v[i];
                }
                i++;
            }

            if(hoise==mx)
                break;
            ans.push_back(sol);
            hoise = mx;
        }

        if(hoise < m)
            puts("0");
        else{
            printf("%d\n", ans.size());
            for(pii p : ans)
                printf("%d %d\n",p.first, p.second);
        }
    }

    return 0;
}
