#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;
#define MAX 50010

string a, needle, hay;
int pi[MAX];

void prefixFunction(){
    int now=-1;
    pi[0] = -1;

    for(int i=1; i<needle.size(); i++){
        while(now!=-1 && needle[now+1]!=needle[i])
            now = pi[now];
        if(needle[now+1]==needle[i])
            pi[i] = ++now;
        else
            pi[i] = now = -1;
    }

    return;
}

bool KMP(){
    int now=-1, cnt=0;

    for(int i=0; i<hay.size(); i++){
        while(now!=-1 && needle[now+1]!=hay[i])
            now = pi[now];
        if(needle[now+1]==hay[i])
            ++now;
        else
            now = -1;
        if(now==needle.size()-1)
            cnt++;
    }

    return cnt==1;
}

char shifted(char ch){
    int index = a.find(ch);
    index--;
    index+=a.size();
    index%=a.size();

    return a[index];
}

void shift(){
    for(int i=0; i<hay.size(); i++)
        hay[i] = shifted(hay[i]);
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        cin>>a>>needle>>hay;

        prefixFunction();

        int i=0;
        vector<int>ans;

        do{
            if(KMP())
                ans.push_back(i);
            shift();
            i++;
        }while(i<a.size());

        if(ans.empty())
            cout<<"no solution\n";
        else if(ans.size()==1)
            cout<<"unique: "<<ans[0]<<endl;
        else{
            cout<<"ambiguous:";
            for(auto val : ans)
                cout<<" "<<val;
            cout<<endl;
        }
    }

    return 0;
}

