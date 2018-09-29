#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    while(cin>>n){
        string s;
        cin>>s;

        bool already[26];
        int ans = 0;

        for(int i=0; i<n-1; i++){
            int cnt = 0;
            memset(already, false, sizeof already);
            for(int k=i; k>=0; k--){
                int id = s[k] - '0';
                if(already[id]) continue;
                already[id] = true;
                for(int l = i+1; l<n; l++){
                    if(s[k]==s[l]){
                        cnt++;
                        break;
                    }
                }
            }
            ans = max(ans, cnt);
        }

        cout<<ans<<endl;
    }

    return 0;
}
