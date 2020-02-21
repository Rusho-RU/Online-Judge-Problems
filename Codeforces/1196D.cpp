#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int q;
    cin>>q;

    int color[3] = {'R', 'G', 'B'};

    while(q--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int ans = INT_MAX;

        for(int i=0; i+k-1<n; i++){
            int cnt=0;
            for(int j=0, now=0; j<k; j++, now = (now+1)%3){
                if(s[i+j]!=color[now])
                    cnt++;
            }

            ans = min(ans, cnt);
        }

        for(int i=0; i+k-1<n; i++){
            int cnt=0;
            for(int j=0, now=1; j<k; j++, now = (now+1)%3){
                if(s[i+j]!=color[now])
                    cnt++;
            }

            ans = min(ans, cnt);
        }

        for(int i=0; i+k-1<n; i++){
            int cnt=0;
            for(int j=0, now=2; j<k; j++, now = (now+1)%3){
                if(s[i+j]!=color[now])
                    cnt++;
            }

            ans = min(ans, cnt);
        }

        cout<<ans<<endl;
    }

    return 0;
}

