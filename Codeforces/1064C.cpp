#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int n;
    string s;

    while(cin>>n){
        cin>>s;
        sort(s.begin(), s.end());
        cout<<s<<endl;
    }

    return 0;
}
