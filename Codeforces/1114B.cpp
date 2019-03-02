#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

int main(){
    FasterIO;

    int n, m, k;

    while(cin>>n>>m>>k){
        pair<int, int>data[n];
        vector<int>p[k];

        for(int i=0; i<n; i++){
            cin>>data[i].first;
            data[i].second = i;
        }

        sort(data, data+n, greater<pair<int, int> >());


        long long ans = 0;
        vector<int>res;

        for(int i=0; i<m*k; i++){
            ans+=data[i].first;
            res.push_back(data[i].second);
        }

        sort(res.begin(), res.end());

        cout<<ans<<endl;

        for(int i=m; i<m*k; i+=m){
            cout<<res[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
