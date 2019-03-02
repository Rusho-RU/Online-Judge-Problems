#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n*n], ans[n][n];
        int cnt[1010] = {};

        for(int i=0; i<n*n; i++){
            cin>>data[i];
            cnt[data[i]]++;
        }

        vector<pair<int, int> >v;

        for(int i=1; i<1010; i++){
            if(cnt[i])
                v.push_back({cnt[i], i});
        }

        sort(all(v), greater<pair<int, int> >());

        int now = 0;

        for(int r=0; r<n/2; r++){
            for(int c=0; c<n/2; c++){
                while(now<v.size() && v[now].first<4)
                    now++;
                if(now==v.size())
                    break;
                ans[r][c] = ans[r][n-c-1] = ans[n-r-1][c] = ans[n-r-1][n-c-1] = v[now].second;
                v[now].first-=4;
            }
            if(now==v.size())
                break;
        }

        if(n&1){
            int r = n/2, c = n/2;

            ans[r][c] = INT_MAX;
            now=0;

            for(int i=r-1; i>=0; i--){
                while(now<v.size() && v[now].first<2)
                    now++;
                if(now==v.size())
                    break;

                ans[i][c] = ans[n-i-1][c] = v[now].second;
                v[now].first-=2;
            }

            for(int i=c-1; i>=0 && now<v.size(); i--){
                while(now<v.size() && v[now].first<2)
                    now++;
                if(now==v.size())
                    break;

                ans[r][i] = ans[r][n-i-1] = v[now].second;
                v[now].first-=2;
            }

            for(int i=0; i<v.size(); i++){
                if(v[i].first>0){
                    ans[r][c] = v[i].second;
                    v[i].first--;
                    break;
                }
            }
        }

        bool possible = true;

        for(int i=0; i<v.size(); i++){
            if(v[i].first){
                possible = false;
                break;
            }
        }

        if(possible && ans[n/2][n/2]!=INT_MAX){
            cout<<"YES\n";

            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        else
            cout<<"NO\n";
    }

    return 0;
}

