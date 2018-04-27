#include <bits/stdc++.h>
using namespace std;

#define MAX 50000

bool not_prime[MAX];
vector<int>prime;

void sieve(){
    not_prime[0] = not_prime[1] = true;

    for(int i=2; i*i<MAX; i++){
        if(!not_prime[i]){
            for(int j=i*i; j<MAX; j+=i){
                not_prime[j] = true;
            }
        }
    }

    for(int i=0; i<MAX; i++)
        if(!not_prime[i])
            prime.push_back(i);

    return;
}

bool isPrime(long long n){
    if(n<MAX) return !not_prime[n];

    for(int i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
        if(n%prime[i]==0)
            return false;

    return true;
}

int main(){
    long long a,b;
    sieve();
    vector<long long>primes;

    while(scanf("%lld%lld",&a,&b)==2){
        for(long long i=a; i<=b; i++)
            if(isPrime(i))
                primes.push_back(i);

        long long mx = INT_MIN, mn = INT_MAX, mn1,mn2, mx1, mx2;

        for(int i=1; i<primes.size(); i++){
            if(primes[i] - primes[i-1] < mn)
                mn = primes[i] - primes[i-1], mn1 = primes[i-1], mn2 = primes[i];

            if(primes[i] - primes[i-1] > mx)
                mx = primes[i] - primes[i-1], mx1 = primes[i-1], mx2 = primes[i];
        }

        if(mx == INT_MIN)
            puts("There are no adjacent primes.");
        else
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",mn1,mn2,mx1,mx2);

        primes.clear();
    }

    return 0;
}
