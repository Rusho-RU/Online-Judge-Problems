#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        vector<int>t[n];
        set<int>s;

        int v;

        for(int i=0; i<n; i++) cin>>v, s.insert(v);
        for(int i=0; i<n; i++) cin>>v, t[i].push_back(v);

        for(int i=0; i<n; i++)
            sort(t[i].begin(), t[i].end());


    }

    return 0;
}

