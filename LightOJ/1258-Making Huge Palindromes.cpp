///Finding non overlapping prefix of reverse(s)+s which is also it's Suffix using prefix function

#include <bits/stdc++.h>
using namespace std;

string s;
int pi[2*1000001], sz;

void prefixFunction(){
    int now=-1;
    pi[0]=-1;

    for(int i=1;i<s.size();i++){
        while(now!=-1 && s[now+1]!=s[i]){
            now=pi[now];
        }

        if(s[now+1]==s[i])
            pi[i]=++now;
        else
            pi[i]=now=-1;

        if(pi[i]==sz)
            now=pi[now], i--;

    }

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, Case=0;
    cin>>t;

    while(t--){
        string c;
        cin>>s;
        c=s;

        reverse(s.begin(), s.end());
        s+=c;
        sz=s.size()/2;

        prefixFunction();

        int ans = s.size()-pi[s.size()-1]-1;

        cout<<"Case "<<++Case<<": "<<ans<<endl;
    }

    return 0;
}
