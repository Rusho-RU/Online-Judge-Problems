#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAXn 205

vector<int>prime, semi_prime;
bool not_prime[MAXn];
bool isPossible[MAXn];

void sieve(){
    not_prime[0] = not_prime[1] = true;

    for(int i=2; i*i<MAXn; i++){
        if(!not_prime[i]){
            for(int j=i*i; j<MAXn; j+=i){
                not_prime[j] = true;
            }
        }
    }

    for(int i=0; i<MAXn; i++)
        if(!not_prime[i])
            prime.push_back(i);
}

void calculate(){
    int p1, p2;

    for(int i=0; i<prime.size(); i++){
        for(int j=i+1; j<prime.size(); j++){
            if(prime[i]*prime[j] < MAXn)
                semi_prime.push_back(prime[i]*prime[j]);
        }
    }

    for(int i=0; i<semi_prime.size(); i++){
        for(int j=i; j<semi_prime.size(); j++){
            if(semi_prime[i] + semi_prime[j] < MAXn)
                isPossible[semi_prime[i] + semi_prime[j]] = true;
        }
    }
}

int main(){
    FasterIO;
    sieve();
    calculate();

    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(isPossible[n])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
