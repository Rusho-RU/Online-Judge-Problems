#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount(n) __builtin_popcount(n)
#define MAX 200010

int main(){
    FasterIO;

    int n, k;

    int cnt[MAX];

    while(cin>>n>>k){
        memset(cnt, 0, sizeof cnt);
        vector<pair<int, int> >v;
        vector<int>ans;

        for(int i=0; i<n; i++){
            int v;
            cin>>v;
            cnt[v]++;
        }

        for(int i=1; i<MAX; i++){
            if(cnt[i]){
                v.push_back(make_pair(cnt[i], i));
            }
        }

        sort(v.begin(), v.end(), greater<pair<int, int> >());

        int val, c, i;

        for(i=0; i<v.size()-1; i++){
            c = v[i].first/v[i+1].first;
            if(c){
                while(c--){
                    ans.push_back(v[i].second);
                }
            }
        }

        ans.push_back(v[v.size()-1].second);

        int rep = k/ans.size();
        int ex = k%ans.size();

        while(rep--){
            for(int i=0; i<ans.size(); i++)
                cout<<ans[i]<<" ";
        }

        for(int i=0;i<ex; i++)
            cout<<ans[i]<<" ";

        cout<<endl;
    }

    return 0;
}
