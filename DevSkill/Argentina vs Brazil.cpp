#include <bits/stdc++.h>
using namespace std;

int main(){
    string brazil = "Brazil", argentina = "Argentina";
    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;

        if(a>b){
            cout<<argentina<<" "<<a<<" - "<<b<<" "<<brazil<<endl;
        }

        else
            cout<<brazil<<" "<<b<<" - "<<a<<" "<<argentina<<endl;
    }

    return 0;
}
