#include <bits/stdc++.h>
using namespace std;

#define MAX 1000050

bool not_prime[MAX];
vector<int>prime;

void sieve(){
    for(int i=2; i*i<MAX; i++){
        if(!not_prime[i]){
            prime.push_back(i);
            for(int j=i*i; j<MAX; j+=i)
                not_prime[j] = true;
        }
    }

    for(int i = prime[prime.size()-1]+2; i<MAX; i+=2)
        if(!not_prime[i])
            prime.push_back(i);
}

int main(){
    sieve();
    cout<<prime.size()<<endl;
}
