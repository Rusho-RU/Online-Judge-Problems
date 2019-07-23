#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        if(m==0){
            cout<<1<<endl;
            continue;
        }

        if(m<=n/2)
            cout<<m<<endl;
        else
            cout<<n-m<<endl;
    }

    return 0;
}

