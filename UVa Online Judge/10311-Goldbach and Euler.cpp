#include <bits/stdc++.h>
using namespace std;

#define MAX 100000007

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

    prime.push_back(2);

    for(int i=3; i<MAX; i+=2){
        if(!not_prime[i]){
            prime.push_back(i);
        }
    }

    return;
}

int main(){
    sieve();
    cout<<"wtf"<<endl;
    int n;

    while(scanf("%d",&n)==1){
        if(n%2){
            if(!not_prime[n-2])
                printf("%d is the sum of 2 and %d.\n",n,n-2);
            else
                printf("%d is not the sum of two primes!\n",n);
            continue
        }


    }
}
