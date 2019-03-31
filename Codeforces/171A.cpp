#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int a, b;

    while(cin>>a>>b){
        vector<int>digit;

        while(b){
            digit.push_back(b%10);
            b/=10;
        }

        for(auto d : digit)
            b = b*10 + d;

        cout<<a+b<<endl;
    }

    return 0;
}

