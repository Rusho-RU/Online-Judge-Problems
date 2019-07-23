#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int a, b;
    while(cin>>a>>b){
        if(a>=6 && a<13)
            b/=2;
        if(a<6)
            b=0;

        cout<<b<<endl;
    }

    return 0;
}

