#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    int n, m;

    while(cin>>n>>m){
        string s1, s2;
        cin>>s1>>s2;

        int value;
        long long sum=1, ans=0, hold=0;

        for(int i=m-1; i>=0; i--){
            value = 0;

            if(n){
                n--;
                value = s1[n] - '0';
            }

            value = (value*sum)%MOD;
            sum = (sum*2)%MOD;

            hold = (hold+value)%MOD;

            if(s2[i]-'0') ans = (ans+hold) % MOD;
        }

        cout<<ans<<endl;
    }

    return 0;
}
