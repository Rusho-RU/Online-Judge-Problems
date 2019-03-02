#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 10000000

int main(){
    FasterIO;

    long long n, k;

    while(cin>>n>>k){
        long long mod, mn = LLONG_MAX, x, hold;

        for(mod = 1; mod<k; mod++){
            if(n%mod)
                continue;

            x = (n*k)/mod + mod;

            mn = min(mn, x);
        }

        cout<<mn<<endl;
    }

    return 0;
}

