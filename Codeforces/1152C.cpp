#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int a, b;

    while(cin>>a>>b){
        int div = abs(a-b), k;

        vector<pair<int, int> >v;

        for(k=0; k<=div; k++){
            int gcd = __gcd(a+k, b+k);
            if(div%gcd==0)
                v.push_back({gcd, k});
        }

        sort(all(v));

        for(auto p : v)
            cout<<p.first<<" "<<p.second<<endl;

        cout<<k<<endl;
    }

    return 0;
}

