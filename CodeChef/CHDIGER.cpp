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

        int cnt=0;
        bool used[10] = {};

        for(int i=0, j; i<n; i++){
            if(used[s[i]-'0']){
                ans+=s[i];
                continue;
            }
            for(j=i+1; j<n; j++){
                if(s[j]<s[i] && !used[s[j]-'0']){
                    cnt++;
                    used[s[i]-'0'] = true;
                    break;
                }
            }
            if(j==n)
                ans+=s[i];
        }

        while(!ans.empty() && ans.back()>d)
            ans.pop_back(), cnt++;

        for(int i=0; i<cnt; i++)
            ans+=d;

        cout<<ans<<endl;
    }

    return 0;
}

