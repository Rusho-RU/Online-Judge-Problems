#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 100010
#define MOD 1000000007

long long factorial[MAX], inverse_factorial[MAX];

long long BigMOD(long long a, long long b){
    if(b==0)
        return 1;

    if(b&1)
        return a * BigMOD(a, b-1) % MOD;

    long long temp = BigMOD(a, b/2);
    return temp * temp % MOD;
}

void calculate(){
    factorial[0] = inverse_factorial[0] = 1;

    for(int i=1; i<MAX; i++){
        factorial[i] = factorial[i-1] * i % MOD;
        inverse_factorial[i] = inverse_factorial[i-1] * BigMOD(i, MOD-2) % MOD;
    }
}

int getIndex(char ch){
    if(ch>='A' && ch<='Z')
        return ch-'A';
    return ch-'a'+26;
}

int main(){
    FasterIO;

    calculate();

    string s;

    while(cin>>s){
        int cnt[26*2];
        int n = s.size(), distinct;

        memset(cnt, 0, sizeof cnt);

        for(int i=0; i<n; i++)
            cnt[getIndex(s[i])]++;

        for(int i=0; i<26*2; i++)
            if(cnt[i])
                distinct++;

        int q;
        cin>>q;

        while(q--){
            int x, y, d = distinct-2;
            cin>>x>>y;
            x--, y--;

            int cntx = cnt[getIndex(s[x])];
            int cnty = cnt[getIndex(s[y])];

            int total = cntx + cnty;

            if(s[x]==s[y])
                total/=2, d++;

            if(total>(n/2)){
                cout<<"0\n";
                continue;
            }

            long long ans = (factorial[total] * inverse_factorial[cntx])%MOD;

            if(s[x]!=s[y])
                ans = (ans * inverse_factorial[cnty])%MOD;

            cout<<ans<<endl;
        }
    }

    return 0;
}
