#include <bits/stdc++.h>
using namespace std;

#define MAX 1000050

bool not_prime[MAX];

void sieve(){
    not_prime[0] = not_prime[1] = true;

    for(int i=2; i*i<MAX; i++){
        if(!not_prime[i]){
            for(int j=i*i; j<MAX; j+=i){
                not_prime[j] = true;
            }
        }
    }

    return;
}

int main(){
    sieve();
    int n;

    while(scanf("%d",&n) && n){
        if(!not_prime[n-2]){
            printf("%d = 2 + %d\n",n,n-2);
            continue;
        }

        int limit = n/2 + 1;
        bool found = false;

        for(int a = 3; a<limit; a+=2){
            if(!not_prime[a] && !not_prime[n-a]){
                printf("%d = %d + %d\n",n,a,n-a);
                bool found = true;
                break;
            }
        }

        if(!found) puts("Goldbach's conjecture is wrong.");
    }

    return 0;
}
