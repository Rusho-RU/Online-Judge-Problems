#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    while(cin>>n){
        long long ans=0, val;
        bool odd=false;

        for(int i=0;i<n;i++){
            cin>>val;
            if(val%2==1)
                odd=true;
        }

        if(!odd) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }

    return 0;
}
