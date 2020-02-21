#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int a, b, c;
    int t;
    cin>>t;

    while(t--){
        cin>>a>>b>>c;

        int d = a+c-b;

        d/=2;

        if(a+c > b)
            d++;

        cout<<max(0, d)<<endl;
    }

    return 0;
}

