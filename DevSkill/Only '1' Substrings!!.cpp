#include <bits/stdc++.h>
using namespace std;

int Kadane(const string& s){
    int cnt=0, ans = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            cnt++;
        }

        else{
            ans+=(cnt*(cnt+1))/2;
            cnt=0;
        }
    }

    ans+=(cnt*(cnt+1))/2;

    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int ans = Kadane(s);

        cout<<ans<<endl;
    }

    return 0;
}

