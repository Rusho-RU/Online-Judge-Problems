#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int cnt[26];
string diet, bf, lunch, ans;

void solve(){
    ans.clear();

    for(int i=0; i<bf.size(); i++){
        int id = bf[i] - 'A';
        if(cnt[id]==0){
            ans="#";
            return;
        }
        cnt[id]--;
    }

    for(int i=0; i<lunch.size(); i++){
        int id = lunch[i] - 'A';
        if(cnt[id]==0){
            ans="#";
            return;
        }
        cnt[id]--;
    }

    for(int i=0; i<26; i++)
        if(cnt[i])
            ans += 'A' + i;

    return;
}

int main(){
    FasterIO;
    int t;
    cin>>t;

    cin.ignore();

    while(t--){
        memset(cnt, 0, sizeof cnt);

        getline(cin, diet);
        getline(cin, bf);
        getline(cin, lunch);

        for(int i=0; i<diet.size(); i++){
            int id = diet[i] - 'A';
            cnt[id]++;
        }

        solve();

        if(ans[0]=='#')
            cout<<"CHEATER"<<endl;
        else
            cout<<ans<<endl;
    }

    return 0;
}
