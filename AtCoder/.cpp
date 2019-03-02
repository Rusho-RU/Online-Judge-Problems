#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<pair<long long, long long> >v;

void factorize(long long n){
    long long freq = 0, mn = LONG_MAX, amm = 0;

    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0)
                freq++, n/=i;

            prine.push_back(make_pair(freq, i));
        }
    }

    if(n!=1)
        v.push_back(make_pair(n, 1));

    return;
}

int main(){
    FasterIO;

    long long n, p;

    while(cin>>n>>p){

    }

    return 0;
}

