#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int a, b, c;

    while(cin>>a>>b>>c){
        if((c>=a && c<=b) || (c>=b && c<=a))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}

