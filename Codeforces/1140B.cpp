#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin>>n>>s;

        int cnt1=0, cnt2=0;

        for(int i=0; i<n; i++, cnt1++)
            if(s[i]=='>')
                break;

        for(int i=n-1; i>=0; i--, cnt2++)
            if(s[i]=='<')
                break;

        cout<<min(cnt1, cnt2)<<endl;
    }

    return 0;
}
