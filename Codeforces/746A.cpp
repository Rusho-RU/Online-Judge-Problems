#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        string s, a, b;
        cin>>s;

        for(int i=n-2; i>=0; i-=2)
            a+=s[i];

        for(int i=n-1; i>=0; i-=2)
            b+=s[i];

        reverse(b.begin(), b.end());

        cout<<a<<b<<endl;
    }

    return 0;
}

