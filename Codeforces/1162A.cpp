#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, h, m;

    while(cin>>n>>h>>m){
        int data[n];

        for(int i=0; i<n; i++)
            data[i] = h;

        while(m--){
            int a, b, c;
            cin>>a>>b>>c;
            a--, b--;
            for(int i=a; i<=b; i++){
                data[i] = min(data[i], c);
            }
        }

        long long ans = 0;
        for(int i=0; i<n; i++)
            ans+=data[i]*data[i];
        cout<<ans<<endl;
    }

    return 0;
}

