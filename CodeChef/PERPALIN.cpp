#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,p;
        string palindrome = "ab", ans;
        cin>>n>>p;

        if(n==1 || n==2 || p==1 || p==2){
            cout<<"impossible"<<endl;
            continue;
        }

        if(p==3)
            palindrome += "a";

        else{
            for(int i=3;i<=p-2; i++)
                palindrome+="a";
            palindrome+="ba";
        }

        int l = n/p;

        for(int i=1; i<=l; i++)
            ans+=palindrome;

        cout<<ans<<endl;
    }

    return 0;
}
