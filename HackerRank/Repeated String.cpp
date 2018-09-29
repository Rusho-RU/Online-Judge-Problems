#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    string s;
    long long n;

    while(cin>>s>>n){
        long long cnt1=0, cnt2=0, rem = n%s.size();

        for(int i=0; i<s.size(); i++)
            if(s[i]=='a')
                cnt1++;

        for(int i=0; i<rem; i++)
            if(s[i]=='a')
                cnt2++;

        long long repeat = n/s.size();
        long long ans = repeat*cnt1 + cnt2;

        cout<<ans<<endl;
    }

    return 0;
}
