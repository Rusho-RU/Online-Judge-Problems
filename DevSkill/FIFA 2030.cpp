#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, goal;
        string s, ans;
        cin>>n;
        int h = -1;

        while(n--){
            cin>>s>>goal;
            if(goal > h){
                h = goal;
                ans = s;
            }
        }

        ans+='/';
        ans = '\\' + ans;

        cout<<"Winner: "<<ans<<endl;
    }

    return 0;
}
