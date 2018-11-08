#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

long long factorize(long long n){
    int freq = 0;
    long long ans = 1;

    for(long long i=2; i*i<=n; i++){
        if(n%i==0){
            freq=0;
            while(n%i==0){
                n/=i;
                freq++;
            }
            ans*=(freq+1);
        }
    }

    if(n!=1)
        ans*=2;
    return ans;
}

int main(){
    FasterIO;

    long long b;

    while(cin>>b){
        long long ans = factorize(b);
        cout<<ans<<endl;
    }

    return 0;
}

