#include <bits/stdc++.h>
using namespace std;

#define fasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();

int main(){
    fasterIO;
    int n;
    string s;

    while(cin>>n>>s){
        int ans = 0;

        for(int i=0; i<s.size(); i++){
            int cnt=0;
            while(s[i]=='x'){
                cnt++, i++;
            }
            if(cnt>2){
                ans+=cnt-2;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
