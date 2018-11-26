#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount
#define MOD 1000000007

long long BigMod(long long a, long long b){
    long long hold;
    if(b==0)
        return 1;
    if(b%2==0){
        hold=BigMod(a,b/2);
        return hold*hold%MOD;
    }

    else
        return (a*BigMod(a,b-1))%MOD;
}

int main(){
    FasterIO;

    int n, q;

    while(cin>>n>>q){
        string s;

        cin>>s;

        long long ones[n+1], zeros[n+1];

        ones[0] = zeros[0] = 0;

        for(int i=0; i<s.size(); i++){
            ones[i+1] = ones[i];
            zeros[i+1] = zeros[i];

            if(s[i]=='1')
                ones[i+1]++;
            else
                zeros[i+1]++;
        }

        while(q--){
            int l, r;
            cin>>l>>r;

            long long o = ones[r] - ones[l-1];

            if(o==0){
                cout<<0<<endl;
                continue;
            }

            long long z = zeros[r] - zeros[l-1];

            long long val1 = BigMod(2, o) - 1;
            long long val2 = BigMod(2, z) - 1;

            long long ans = (val1 + (val2 * val1)%MOD)%MOD;
            cout<<ans<<endl;
        }
    }

    return 0;
}

