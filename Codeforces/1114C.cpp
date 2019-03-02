#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long factorize(long long n, long long k){
    long long x=k, y, freq;
    long long mn = LLONG_MAX;

    for(long long i=2; i*i<=x; i++){
        if(x%i==0){
            freq=0, y=n;
            while(x%i==0){
                x/=i;
                freq++;
            }
            long long cnt=0, j=1;
            while(y/pow(i, j)){
                cnt+=y/pow(i, j), j++;
            }

            mn = min(mn, cnt/freq);
        }
    }

    if(x!=1){
        y=n;
        long long cnt=0, j=1;
        while(y/pow(x, j)){
            cnt+=y/pow(x, j), j++;
        }
        mn = min(mn, cnt);
    }

    return mn;
}

int main(){
    FasterIO;

    long long pow2[64];

    pow2[0] = 1;
    for(int i=1; i<64; i++)
        pow2[i] = pow2[i-1]*2;

    long long n, b;

    while(cin>>n>>b){
        long long ans = factorize(n, b);
        cout<<ans<<endl;
    }

    return 0;
}
