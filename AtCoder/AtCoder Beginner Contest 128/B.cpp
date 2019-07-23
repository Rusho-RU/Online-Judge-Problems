#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

bool cmp(const pair<string, pair<int, int> >& a, const pair<string, pair<int, int> >& b){
    if(a.first==b.first)
        return a.second.first>b.second.first;
    return a.first<b.first;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        pair<string, pair<int, int> >p[n];

        for(int i=0; i<n; i++){
            cin>>p[i].first>>p[i].second.first;
            p[i].second.second = i+1;
        }

        sort(p, p+n, cmp);

        for(int i=0; i<n; i++){
            cout<<p[i].second.second<<endl;
        }
    }

    return 0;
}

