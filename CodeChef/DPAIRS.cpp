#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        vector<pair<int, int> >a, b;

        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            a.push_back({val, i});
        }

        for(int i=0; i<m; i++){
            int val;
            cin>>val;
            b.push_back({val, i});
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i=0; i<m; i++)
            cout<<a[0].second<<" "<<b[i].second<<endl;

        for(int i=1; i<n; i++)
            cout<<a[i].second<<" "<<b[m-1].second<<endl;
    }

    return 0;
}

