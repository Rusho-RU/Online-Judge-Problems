#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MAX 1000010
#define primality 20

typedef long long LL;

vector<LL>prime;
bool not_prime[MAX];

LL BigMul(LL a, LL b, LL m){
    LL x=0, y=a%m;

    while(b){
        if(b&1)
            x = (x+y)%m;
        y = (y+y)%m;
        b>>=1;
    }

    return x;
}

LL BigMod(LL a, LL b, LL m){
    LL x=1, y=a%m;

    while(b){
        if(b&1)
            x = BigMul(x, y, m);
        y = BigMul(y, y, m);
        b>>=1;
    }

    return x%m;
}

bool miller_rabin_test(LL n){
    if(n==1)
        return false;
    if(n<=3)
        return true;

    for(int i=0; i<primality; i++){
        LL a = 2+rand()%(n-2);

        if(BigMod(a, n-1, n)!=1)
            return false;
    }

    return true;
}

void sieve(){
    not_prime[0] = not_prime[1] = true;

    LL i;
    for(i=2; i*i<MAX; i++){
        if(!not_prime[i]){
            prime.push_back(i);
            for(LL j=i*i; j<MAX; j+=i){
                not_prime[j] = true;
            }
        }
    }

    for(; i<MAX; i++)
        if(!not_prime[i])
            prime.push_back(i);

    return;
}

bool isSquare(LL n){
    LL h = sqrt(n);
    return h*h==n;
}

LL factorize(LL n){
    if(n==1)
        return 1;

    LL dn = 1, freq;

    for(int i=0; i<prime.size() && prime[i]*prime[i]*prime[i]<=n; i++){
        freq = 0;
        while(n%prime[i]==0){
            n/=prime[i];
            freq++;
        }

        dn *= (freq+1);
    }

    if(n==1)
        return dn;

    if(miller_rabin_test(n))
        return dn*2;

    if(isSquare(n))
        return dn*3;

    return dn*4;
}

LL solve(LL n){
    if(n==1)
        return 1LL;

    LL dn = factorize(n);

    LL ans = BigMod(n, dn/2, MOD);

    if(dn&1){
        LL root = sqrt(n);
        ans = BigMul(ans, root, MOD);
    }

    return ans;
}

int main(){
    FasterIO;

    sieve();

    int t;
    cin>>t;

    while(t--){
        LL n;
        cin>>n;

        LL ans = solve(n);

        cout<<ans<<endl;
    }

    return 0;
}
