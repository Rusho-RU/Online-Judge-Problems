#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long data[n+1];

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n);

        data[n] = INT_MAX;

        int ans = 1, now=1;

        for(int i=0; i<n; i++){
            while(data[now]<=data[i]+5){
                ans = max(ans, now-i+1);
                now++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

