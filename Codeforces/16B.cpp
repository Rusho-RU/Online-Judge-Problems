#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        vector<pair<int, int> >v(m);

        for(int i=0; i<m; i++)
            cin>>v[i].second>>v[i].first;

        sort(v.begin(), v.end(), greater<pair<int, int> >());

        int i=0;
        long long total = 0;

        while(n>0 && i<m){
            int amount = min(n, v[i].second);
            total+=amount*v[i].first;
            n-=amount;
            i++;
        }

        cout<<total<<endl;
    }

    return 0;
}

