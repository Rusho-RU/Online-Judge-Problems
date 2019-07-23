#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int d;
        cin>>d;

        string s;
        cin>>s;

        int p = 0;

        for(int i=0; i<d; i++)
            if(s[i]=='P')
                p++;

        int cnt=0;

        for(int i=2; i<d-2; i++){
            if(p*100>=d*75)
                break;
            if(s[i]=='A' && (s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
                p++, cnt++;
        }

        if(p*100<d*75)
            cout<<"-1"<<endl;
        else
            cout<<cnt<<endl;
    }

    return 0;
}

