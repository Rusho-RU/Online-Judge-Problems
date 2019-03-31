#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        string s;
        char d;

        cin>>s>>d;

        int n = s.size();
        string ans = "";

        bool used[10] = {};

        for(int x=0; x<9; x++){
            for(int i=1; i<s.size(); i++){
                if(s[i]<s[i-1] && !used[s[i-1]-'0'])
                    used[s[i-1]-'0'] = true;
                else
                    ans+=s[i-1];
            }

            ans+=s.back();

            swap(ans, s);
            ans.clear();
        }

        if(s.back()>d && !used[s.back()-'0'])
            s.pop_back();

        for(int i=s.size(); i<n; i++)
            s+=d;

        cout<<s<<endl;
    }

    return 0;
}

