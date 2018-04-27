#include <bits/stdc++.h>
using namespace std;

#define MAX 31622

bool not_prime[MAX];
vector<int>prime;

void sieve(){
    not_prime[0] = not_prime[1] = true;
    int i;

    prime.push_back(2);

    for(int i=4; i<MAX; i+=2) not_prime[i] = true;

    for(i=3; i*i<MAX; i+=2){
        if(!not_prime[i]){
            prime.push_back(i);
            for(int j=i*i; j<MAX; j+=2*i){
                not_prime[j] = true;
            }
        }
    }

    for(; i<MAX; i++){
        if(!not_prime[i]){
            prime.push_back(i);
        }
    }

    return;
}

int phi(int n){
    if(n==1) return 0;
    int result = 1;

    for(int i=0; i<prime.size() && prime[i]*prime[i] <= n; i++){
        if(n%prime[i]==0){
            n /= prime[i];
            result *= prime[i]-1;
            while(n%prime[i]==0){
                n/=prime[i];
                result *= prime[i];
            }
        }
    }

    if(n>1)
        result *= n-1;
    return result;
}

int main(){
    sieve();

    int n;
    while(scanf("%d",&n),n){
        int ans = phi(n);
        printf("%d\n",ans);
    }
    return 0;
}



