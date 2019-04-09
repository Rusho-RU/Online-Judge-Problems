#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t, Case = 0;

    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string a, b;

        reverse(all(s));

        for(int i=0; i<s.size(); i++){
            if(s[i]=='4')
                a+='3', b+='1';

            else
                a+=s[i], b+='0';
        }

        int cnt = 0;

        reverse(all(s));

        for(int i=0; i<s.size(); i++){
            if(s[i]=='4')
                break;
            cnt++;
        }

        while(cnt--)
            b.pop_back();

        reverse(all(a));
        reverse(all(b));

        cout<<"Case #"<<++Case<<": "<<a<<" "<<b<<endl;
    }

    return 0;
}

