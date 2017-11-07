#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    cin>>t;

    while(t--){
        int n,cnt=0;
        string s;
        cin>>n>>s;

        bool found = false;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                cnt++;
                while(1){
                    i++;
                    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                        continue;
                    else
                        break;
                }
                i--;
            }
        }

        printf("Case %d: %d\n",++Case,cnt);
    }

    return 0;
}
