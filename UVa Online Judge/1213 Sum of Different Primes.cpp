#include <bits/stdc++.h>
using namespace std;

#define MAXN 1125
#define MAXK 15

bool not_prime[MAXN];
vector<int>prime;
int dp[MAXK][MAXN];

void sieve(){
    not_prime[0] = not_prime[1] = true;

    for(int i=2; i*i<MAXN; i++){
        if(!not_prime[i]){
            prime.push_back(i);
            for(int j=i*i; j<MAXN; j+=i){
                not_prime[j] = true;
            }
        }
    }

    for(int i=prime.back()+2; i<MAXN; i+=2){
        if(!not_prime[i]){
            prime.push_back(i);
        }
    }

    return;
}

void pre_calculate(){
    dp[0][0] = 1;

    for(auto p : prime){
        for(int i=MAXK-1; i; i--){
            for(int j=p; j<MAXN; j++){
                dp[i][j] += dp[i-1][j-p];
            }
        }
    }
}

int main(){
    sieve();
    pre_calculate();

    cout<<prime.size()<<endl;

    int n, k;

    while(scanf("%d %d",&n,&k) && n+k)
        printf("%d\n",dp[k][n]);

    return 0;
}
