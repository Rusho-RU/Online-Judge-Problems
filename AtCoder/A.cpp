#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int a, b;

    while(cin>>a>>b){
        if(b%a)
            cout<<b-a;
        else
            cout<<b+a;
        cout<<endl;
    }

    return 0;
}
