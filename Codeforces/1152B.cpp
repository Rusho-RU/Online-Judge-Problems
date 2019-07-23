#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int bit_count(int n){
    int b=0;
    while(n){
        n>>=1;
        b++;
    }

    return b;
}

int main(){
    FasterIO;

    int x;

    while(cin>>x){
        vector<int>v;
        int mov=0;

        while(1){
            int b = bit_count(x);
            int p = pow(2, b)-1;

            if(x==p)
                break;

            x^=p;
            mov++;

            v.push_back(b);

            b = bit_count(x);
            p = pow(2, b)-1;

            if(x==p)
                break;

            x++;
            mov++;
        }

        cout<<mov<<endl;
        for(auto val : v)
            cout<<val<<" ";

        cout<<endl;
    }

    return 0;
}

