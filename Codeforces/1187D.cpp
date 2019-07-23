#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n), b(n), aa, bb;

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
            cin>>b[i];

        aa = a, bb = b;

        sort(all(aa));
        sort(all(bb));

        cout<<((aa==bb && b<=a) ? "YES" : "NO")<<endl;
    }

    return 0;
}

