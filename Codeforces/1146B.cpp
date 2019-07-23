#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

string check(const string& s){
    string t;
    int n = s.size();

    for(int i=0; i<n; i++)
        if(s[i]!='a')
            t+=s[i];

    int m = t.size();

    if(m==0)
        return s;

    if(m&1)
        return ":(";

    for(int i=0, j=m/2; j<m; j++, i++)
        if(t[i]!=t[j])
            return ":(";

    int hold, a=0;
    string sp;

    for(int i=0, cnt=0; cnt<m/2 && i<n; i++){
        if(s[i]!='a')
            cnt++;
        sp+=s[i];
        hold=i;
    }

    while(++hold<n && s[hold]=='a')
        sp+='a';

    if((int)sp.size() + m/2 != n)
        return ":(";

    return sp;
}

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        cout<<check(s)<<endl;
    }

    return 0;
}

