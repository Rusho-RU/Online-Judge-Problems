#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;
    string s;

    while(cin>>n>>s){
        int m = n-11, e=0, prev[n+1];
        m/=2;

        memset(prev, 0, sizeof prev);

        for(int i=0; i<n; i++)
            if(s[i]=='8')
                e++;
            else
                prev[e] = i-e+1;

        e-=m;

        int hold = prev[m] - m;
        if(e>0 && hold<1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

    return 0;
}

