#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int prefixFunction(const string& s){
    int now, pi[s.size()];
    now = pi[0] = -1;

    for(int i=1; i<s.size(); i++){
        while(now!=-1 && s[i]!=s[now+1])
            now = pi[now];
        if(s[i]==s[now+1])
            pi[i] = ++now;
        else
            pi[i] = now = -1;
    }

    return now+1;
}

int main(){
    FasterIO;

    string s;
    int t, k;

    cin>>t;

    while(t--){
        cin>>s>>k;

        int reduce = prefixFunction(s);

        long long ans = 1LL*s.size()*k;

        ans-=1LL*reduce*(k-1);

        cout<<ans<<endl;
    }

    return 0;
}
