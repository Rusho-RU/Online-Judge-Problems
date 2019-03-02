#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int count[n+1], cnt=0;
        string ans = "";

        memset(count, 0, sizeof count);

        for(int i=0, val; i<m; i++){
            cin>>val;

            if(count[val]==0)
                cnt++;

            count[val]++;

            if(cnt==n){
                for(int k=1; k<=n; k++){
                    count[k]--;
                    if(count[k]==0)
                        cnt--;
                }
                ans+='1';
            }

            else
                ans+='0';
        }

        cout<<ans<<endl;
    }

    return 0;
}
