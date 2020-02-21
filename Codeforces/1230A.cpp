#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int a, b, c, d;

    while(cin>>a>>b>>c>>d){
        if(a+b==c+d)
            cout<<"YES"<<endl;
        else if(a+c==b+d)
            cout<<"YES"<<endl;
        else if(a+d==b+c)
            cout<<"YES"<<endl;
        else if(a==b+c+d)
            cout<<"YES"<<endl;
        else if(b==a+c+d)
            cout<<"YES"<<endl;
        else if(c==a+b+d)
            cout<<"YES"<<endl;
        else if(d==a+b+c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

