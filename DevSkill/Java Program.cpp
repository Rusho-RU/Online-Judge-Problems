#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, Case=0;
    cin>>t;

    while(t--){
        string s, ans;
        cin>>s;

        for(int i=0; s[i]!='.'; i++){
            if(i && s[i]>='A' && s[i]<='Z')
                ans.push_back(' ');
            ans.push_back(s[i]);
        }

        cout<<"Case #"<<++Case<<" -> "<<ans<<endl;
    }

    return 0;
}
