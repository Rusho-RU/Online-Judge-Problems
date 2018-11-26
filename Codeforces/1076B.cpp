#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount(n) __builtin_popcount(n)

#define MAX 100050

bool notPrime[MAX];
vector<long long>prime;

void seive(){
    notPrime[0] = notPrime[1] = true;

    for(long long i=2; i*i<MAX; i++){
        if(!notPrime[i]){
            for(long long j=i*i; j<MAX; j+=i){
                notPrime[j] = true;
            }
        }
    }

    for(long long i=0; i<MAX; i++)
        if(!notPrime[i])
            prime.push_back(i);

    return;
}

bool isPrime(long long n){
    if(n<MAX){
        return !notPrime[n];
    }

    for(long long i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
        if(n%prime[i]==0)
            return false;

    return true;
}

long long firstValue(long long n){
    for(long long i=0; i<prime.size(); i++){
        if(n%prime[i]==0)
            return prime[i];
    }
}

long long solve(long long n){
    if(isPrime(n))
        return 1;

    long long v = firstValue(n);

    return (n-v)/2 + 1;
}

int main(){
    FasterIO;
    seive();

    long long n;

    while(cin>>n){
        long long ans = solve(n);
        cout<<ans<<endl;
    }

    return 0;
}

