#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int cnt = 0;
    string t;
    cin>>t;

    string s, res,  count;

    for(int i = t.size()-1; i >= 0; i--){
        if(t[i] == 'a')
            break;
        count += t[i];
        cnt++;
    }
    for(int i = 0; i < count.size()/2; i++)
        swap(count[i],count[count.size()-1 - i]);

    for(int i = 0; i < t.size()-cnt; i++){
        if(t[i]!='a') s += t[i];
        res += t[i];
    }

    if(count.size() > s.size()){
        int n = count.size() - s.size();
        if(n&1){
            cout<<":("<<endl;
            return 0;
        }
        n = n/2;
        for(int i = 0; i < n; i++){
            res += count[i];
            s += count[i];
        }

        int x = count.size();
        string tmp = count;
        count.clear();

        for(int i = n; i < x; i++){
            count += tmp[i];
        }
    }

    if(count==s)
        cout<<res<<endl;

    else cout<<":("<<endl;



    return 0;

    return 0;
}

