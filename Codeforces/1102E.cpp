#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 200010
#define MOD 998244353

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long ans = 1;

        pair<int, int>data;

        for(int i=0; i<n; i++){
            cin>>data[i].first;
            data[i].second = i;
        }

        sort(data, data+n);

        int cnt = 1;
        int mx = INT_MIN;

        for(int i=1; i<n; i++){
            if(data[i].first==data[i-1].first)
                cnt++;
            else{
                mx = max(mx, data[i-1].second-data[i-cnt].second);
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
