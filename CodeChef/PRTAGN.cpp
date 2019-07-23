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
        int q;
        cin>>q;

        long long e=0, o=0;

        while(q--){
            int x;
            cin>>x;

            long long he = e, ho = o;

            if(__builtin_popcount(x)&1)
                swap(he, ho), o++;
            else
                e++;

            e+=he, o+=ho;

            cout<<e<<" "<<o<<endl;
        }
    }

    return 0;
}

