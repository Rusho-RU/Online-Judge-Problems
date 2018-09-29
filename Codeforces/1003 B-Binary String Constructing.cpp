#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,x;

    while(cin>>a>>b>>x){
        string ans, one;
        int sign;

        if(a>b)
            sign=1;
        else
            sign=0;

        for(int i=0; i<x; i++){
            if(i%2==sign)
                ans+='1', b--;
            else
                ans+='0', a--;
        }

        for(int i=0; i<b; i++)
            one+='1';

        ans = one+ans;

        for(int i=0; i<a; i++)
            ans+='0';

        cout<<ans<<endl;
    }

    return 0;
}
