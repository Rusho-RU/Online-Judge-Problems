#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;
#define MAX 1000010

string hay, needle;
int pi[MAX];

vector<int>ans;

void prefixFunction(){
    pi[0] = -1;
    int now = -1;

    for(int i=1; i<needle.size(); i++){
        if(now!=-1 && needle[now+1]!=needle[i])
            now = pi[now];
        if(needle[now+1]==needle[i])
            pi[i] = ++now;
        else
            pi[i] = now = -1;
    }

    return;
}

void KMP(){
    int now=-1;

    for(int i=0; i<hay.size(); i++){
        if(now!=-1 && needle[now+1]!=hay[i])
            now = pi[now];
        if(needle[now+1]==hay[i])
            ++now;
        else
            now=-1;

        if(now==needle.size()-1)
            ans.push_back(i+1-needle.size()+1);
    }
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        ans.clear();
        cin>>hay>>needle;

        prefixFunction();
        KMP();

        if(ans.empty())
            cout<<"Not Found\n";
        else{
            cout<<(int)ans.size()<<endl;
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i];
                if(i==ans.size()-1)
                    cout<<endl;
                else
                    cout<<" ";
            }
        }

        if(t)
            cout<<endl;
    }

    return 0;
}
