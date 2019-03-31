#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    long long amount[18258];
    amount[1] = 1;

    for(int i=2; i<18258; i++){
        amount[i] = amount[i-1]+(i-1)*12;
    }

    int n;

    while(cin>>n){
        cout<<amount[n]<<endl;
    }

    return 0;
}

