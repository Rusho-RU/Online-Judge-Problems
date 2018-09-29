#include <bits/stdc++.h>
using namespace std;

#define MAX 2000

bool not_prime[MAX];
vector<int>prime;

void sieve(){
    not_prime[0] = not_prime[1] = true;

    for(int i=2; i*i<MAX; i++){
        if(!not_prime[i]){
            prime.push_back(i);
            for(int j=i*i; j<MAX; j+=i)
                not_prime[j] = true;
        }
    }

    for(int i = prime[prime.size()-1]+1; i<MAX; i++)
        if(!not_prime[i])
            prime.push_back(i);

    return;
}

int main(){
    sieve();

    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int num = prime[n-1] + 1, i=1;
        printf("Caso %d -> 2",++Case);

        while(prime[i++] <= num)
            printf(" %d",prime[i-1]);
        puts("");
    }

    return 0;
}
