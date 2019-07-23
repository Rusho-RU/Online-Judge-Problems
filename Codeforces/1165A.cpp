#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, x, y;

    while(cin>>n>>x>>y){
        string s;
        cin>>s;

        string num = "1";

        for(int i=0; i<y; i++)
            num+='0';

        int sz = x-num.size();

        string hold;
        for(int i=0; i<sz; i++)
            hold+='0';

        num = hold+num;

        int i = num.size();
        int j = n;
        int ans=0;

        while(i>=0){
            if(s[j]!=num[i]){
                ans++;
            }

            i--, j--;
        }

        cout<<ans<<endl;
    }

    return 0;
}

