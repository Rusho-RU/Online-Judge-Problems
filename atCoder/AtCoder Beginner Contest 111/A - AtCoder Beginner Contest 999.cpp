#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;

    while(cin>>n){
        for(int i=0; i<n.size(); i++){
            if(n[i]=='1')
                n[i] = '9';
            else if(n[i]=='9')
                n[i] = '1';
        }
        cout<<n<<endl;
    }
}

