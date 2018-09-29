#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int n;
    while(cin>>n){
        string s;
        cin>>s;
        int anton=0, danik=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='A')
                anton++;
            else
                danik++;
        }

        if(anton > danik)
            cout<<"Anton"<<endl;
        else if(danik > anton)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;
    }

    return 0;
}
