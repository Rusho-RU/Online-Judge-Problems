#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int m, s;

    while(cin>>m>>s){
        int mx = 9*s;
        int mn = 1;

        string s1, s2;

        for(int i=0; i<m; i++)
            s1+='9';

        s2+='1';
        for(int i=1; i<m; i++)
            s2+='0';

        int hold = mx-s;
        for(int i=m-1; i>=0 && hold; i--){
            s1[i] -= min(s1[i]-'0', hold);
            hold -= min(s1[i]-'0', hold);
        }

        hold = s-mn;
        for(int i=0; i<m && hold; i++){
            s2[i] += min('9'-s2[i], hold);
            hold -= min('9'-s2[i], hold);
        }

        cout<<s1<<" "<<s2<<endl;
    }

    return 0;
}

