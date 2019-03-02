#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 998244353

int main(){
    FasterIO;

    long long n;
    string s;

    while(cin>>n>>s){
        long long pref = 1, suff = 1;

        for(long long i=1; i<n && s[i]==s[i-1]; i++, pref++);

        for(long long i=n-1; i && s[i]==s[i-1]; i--, suff++);

        long long ans;

        if(s[0]==s[n-1])
            ans = (pref+1)*(suff+1);

        else
            ans = pref+suff+1;

        cout<<ans%MOD<<endl;
    }

    return 0;
}

