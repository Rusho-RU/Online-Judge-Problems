#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int convert(int n){
    if(!n) return 0;

    int ret = convert(n/10);

    return n%10 ? ret*10 + n%10 : ret;
}

int main(){
    FasterIO;

    int a,b;

    while(cin>>a>>b){
        int c = a+b;
        a = convert(a);
        b = convert(b);
        c = convert(c);

        if(a+b==c)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
