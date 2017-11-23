#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        string s;
        cin>>s;
        int u, d, l, r;
        u = d = l = r = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='L')
                l++;
            else
                r++;
        }

        cout<<(2*min(l,r) + 2*min(u,d))<<endl;
    }

    return 0;
}
