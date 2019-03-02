#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1000000007

void print(string s){
    if(s.size()==1)
        cout<<s<<endl;
    else
        cout<<s[0]<<s[1]<<s[1]<<s[0]<<endl;
}

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        if(s.size()<=2){
            print(s);
            continue;
        }

        string ss;

        int len = s.size();
        int digit = 0, now = len-2;

        while(digit<len*len){
            ss += s[now];
            digit++;

            now = ((now-1) + len)%len;

            if(digit%len==0)
                now = ((now-1) + len)%len;
        }

        reverse(ss.begin(), ss.end());

        long long n = 0;
        for(int i=0; i<ss.size(); i++)
            n = n*10 + ss[i] - '0';

        cout<<n%MOD<<endl;
    }

    return 0;
}
