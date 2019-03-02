#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int d;
        cin>>d;

        vector<pair<int, int> >v(d);

        cin>>v[0].first>>v[0].second;

        for(int i=1; i<d; i++){
            cin>>v[i].first>>v[i].second;
            v[i].second += v[i-1].second;
        }

        sort(v.begin(), v.end());

        int q;
        cin>>q;

        while(q--){
            int dead, req;

            cin>>dead>>req;

            int i;
            for(i=0; i<d; i++){
                if(v[i].first > dead)
                    break;
            }

            i--;
            if(i>=0 && v[i].second>=req)
                cout<<"Go Camp\n";
            else
                cout<<"Go Sleep\n";
        }
    }

    return 0;
}

