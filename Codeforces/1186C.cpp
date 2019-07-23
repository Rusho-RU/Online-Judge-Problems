#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAX 1000010

int prefix[MAX][2];

int main(){
    FasterIO;

    string a, b;

    while(cin>>a>>b){
        int ans = 0 , x = 0;

        int n = a.size();
        int m = b.size();

        for(int i=0; i<m; i++){
            x^=(a[i]-'0');
            x^=(b[i]-'0');
        }

        for(int i=m; i<n; i++){
            ans+=x==0;
            x^=(a[i]-'0')^(a[i-m]-'0');
        }

        ans+=x==0;

        cout<<ans<<endl;
    }

    return 0;
}

