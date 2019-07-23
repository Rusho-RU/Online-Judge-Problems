#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    long long x, y, k;
    int t;
    cin>>t;

    while(t--){
        cin>>x>>y>>k;
        x+=y;

        long long div = x/k;

        if(div&1)
            cout<<"Paja\n";
        else
            cout<<"Chef\n";
    }

    return 0;
}

