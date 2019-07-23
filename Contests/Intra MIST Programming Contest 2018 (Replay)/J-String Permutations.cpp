#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100050

long long factorial[MAX], inverse_factorial[MAX];

long long bigmod_using_extended_euclid(long long n, long long m){
    long long hold,x=0,y=1;
    while(n>1){
        long long q=n/m;
        hold=m;
        m=n%m;
        n=hold;
        hold=x;
        x=y-q*x;
        y=hold;
    }
    if(y<0) y+=MOD;
    return y;
}

void calculate_using_extended_euclid(){
    factorial[0] = inverse_factorial[0] = 1;

    for(int i=1; i<MAX; i++){
        factorial[i] = factorial[i-1] * i % MOD;
        inverse_factorial[i] = inverse_factorial[i-1] * bigmod_using_extended_euclid(i, MOD) % MOD;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    calculate_using_extended_euclid();

    int t;
    cin>>t;

    while(t--){
        string s;
        int d;
        cin>>s>>d;

        int cnt[10] = {};

        for(int i=0; i<s.size(); i++){
            cnt[s[i]-'0']++;
        }

        long long ans = factorial[s.size()];

        for(int i=0; i<10; i++)
            ans = (ans%MOD * inverse_factorial[cnt[i]]%MOD) %MOD;

        cout<<ans<<endl;
    }
}
