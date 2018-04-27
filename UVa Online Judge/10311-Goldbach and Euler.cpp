#include <bits/stdc++.h>
using namespace std;

#define MAX 100000050

bool not_prime[MAX];
int prev_prime[MAX];
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

    prime.push_back(2);

    for(int i=3; i<MAX; i++){
        prev_prime[i] = prime.size()-1;
        if(!not_prime[i]){
            prime.push_back(i);
        }
    }

    return;
}

int main(){
    sieve();
    int n;

    while(scanf("%d",&n)==1){
        int limit = n/2;
        int index = prev_prime[limit];
        bool found = false;

        for(int i = index; i<prime.size() && prime[i]<n; i++){
            int a = prime[i];
            if(!not_prime[n-a]){
                found = true;
                printf("%d is the sum of %d and %d.\n",n, min(n-a, a), max(n-a, a));
                break;
            }
        }

        if(!found){
            printf("%d is not the sum of two primes!\n",n);
        }
    }
}
