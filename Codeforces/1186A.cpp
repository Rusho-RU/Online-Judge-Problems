#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m, k;

    while(cin>>n>>m>>k){
        cout<<(n>min(m, k) ? "No" : "Yes")<<endl;
    }

    return 0;
}

