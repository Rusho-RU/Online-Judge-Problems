#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int ans[n];

        vector<pair<int, int> >v(n);

        for(int i=0; i<n; i++){
            cin>>v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        bool possible = true;
        int hat = 1;

        for(int i=0; i<n; ){
            int curr = v[i].first;
            int porerta = i + n - curr - 1;

            if(v[porerta].first != curr){
                possible = false;
                break;
            }

            for(int j=i; j<=porerta; j++)
                ans[v[j].second] = hat;
            hat++;
            i = porerta+1;
        }

        if(!possible)
            cout<<"Impossible"<<endl;
        else{
            cout<<"Possible"<<endl;
            for(int i=0; i<n; i++){
                cout<<ans[i];
                if(i==n-1)
                    cout<<endl;
                else
                    cout<<" ";
            }
        }
    }

    return 0;
}


