#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    while(cin>>s){
        int indx=s.size(), cnt=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                indx=i;
                break;
            }
        }

        for(int i=indx+1; i<s.size(); i++)
            if(s[i]=='0')
                cnt++;

        if(cnt>5)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
