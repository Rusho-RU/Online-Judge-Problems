#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

long long sum(long long n){
    int l = (int)(log2(n));

    cout<<l<<endl;

    long long odd = 0, even = 0;

    for(int i=0; i<=l ; i++)
        if(i&1)
            even+=pow(2, i);
        else
            odd+=pow(2, i);

    if(odd+even<n){
        if(l&1)
            even+=(n-pow(2, l));
        else
            odd+=(n-pow(2, l));
    }

    odd%=MOD;
    even%=MOD;

    return ((odd*odd)%MOD + (even*even+even)%MOD)%MOD;
}

int main(){
    FasterIO;

    long long l, r;

    while(cin>>l>>r){
        cout<<sum(r) - sum(l-1)<<endl;
    }

    return 0;
}

