#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string s;
        cin>>s;

        int ans = 0;

        for(int i=0; i<n; i++){
            if((s[i]-'0')%2==0)
                ans+=i+1;
        }

        cout<<ans<<endl;
    }

    return 0;
}

