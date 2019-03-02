#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        pair<int, int>data[n];
        int ans[n];

        for(int i=0; i<n; i++){
            cin>>data[i].first;
            data[i].second = i;
        }

        sort(data, data+n);

        bool possible = true;

        int kk = 0, cnt=1;
        ans[data[0].second] = kk;

        for(int i=1; possible && i<n; i++){
            if(data[i].first==data[i-1].first)
                cnt++;

            else{
                if(cnt>k)
                    possible = false;
                cnt = 1;
            }

            ans[data[i].second] = (++kk)%k;
        }

        if(!possible || cnt>k)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int i=0; i<n; i++){
                cout<<ans[i]+1<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
