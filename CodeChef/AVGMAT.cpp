#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 1000

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;
        vector<pair<int, int> >v;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char ch;
                cin>>ch;
                if(ch=='1'){
                    v.push_back(make_pair(j, i));
                }
            }
        }

        int cnt[n+m-2+1];
        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<v.size(); i++){
            for(int j=i+1; j<v.size(); j++){
                int x1 = v[i].first;
                int y1 = v[i].second;
                int x2 = v[j].first;
                int y2 = v[j].second;

                int dist = abs(x1-x2) + abs(y1-y2);

                cnt[dist]++;
            }
        }

        for(int i=1; i<=n+m-2; i++){
            cout<<cnt[i];
            if(i==n+m+2)
                cout<<endl;
            else
                cout<<" ";
        }
    }

    return 0;
}
