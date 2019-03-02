#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        pair<int, int>l[n], r[n];

        for(int i=0; i<n; i++){
            cin>>l[i].first>>r[i].first;
            l[i].second = r[i].second = i;
        }

        sort(l, l+n);
        sort(r, r+n);

        int g = 0, group[n+1];

        memset(group, -1, sizeof group);

        int i=0, j=0;

        while(i<n && j<n){
            if(l[i].first <= r[j].first)
                group[l[i].second] = g, i++;
            else{
                j++;
                if(j<n && group[l[j].second]==-1)
                    g^=1;
            }

        }

        set<int>s;

        for(int i=0; i<n; i++)
            s.insert(group[i]);

        if(s.size()!=2){
            cout<<"-1\n";
        }

        else{
            for(int i=0; i<n; i++)
                cout<<group[i]+1<<" ";
            cout<<endl;
        }
    }

    return 0;
}
