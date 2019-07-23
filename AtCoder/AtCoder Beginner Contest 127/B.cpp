#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int r, d, x;

    while(cin>>r>>d>>x){
        for(int i=0; i<10; i++){
            x = r*x-d;
            cout<<x<<endl;
        }
    }

    return 0;
}

