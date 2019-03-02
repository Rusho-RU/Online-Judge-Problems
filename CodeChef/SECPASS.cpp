#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 100010

string s;
int n, pi[MAX], cnt[MAX];

int prefixFunction(){
    memset(cnt, 0, sizeof cnt);

    int now, mx=-1;
    now=pi[0]=-1;

    for(int i=1;i<s.size();i++){
        while(now!=-1 && s[now+1]!=s[i])
            now=pi[now];

        if(s[now+1]==s[i]){
            ++now;
            if(pi[now]!=-1)
                now = pi[now];
            pi[i] = now;
        }
        else
            pi[i]=now=-1;

        if(pi[i]!=-1)
            cnt[pi[i]]++;

        mx = max(mx, pi[i]);
    }

    return mx;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        cin>>n>>s;

        int ans = prefixFunction();

        if(ans==-1)
            cout<<s<<endl;
        else{
            int mx = INT_MIN, hold;

            for(int i=0; i<n; i++){
                if(cnt[i]>=mx){
                    mx = cnt[i];
                    hold=i;
                }
            }

            for(int i=0; i<=hold; i++)
                cout<<s[i];
            cout<<endl;
        }
    }

    return 0;
}

