#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    while(cin>>s){
        int data[26],sum=0;

        for(int i=0; i<26; i++){
            cin>>data[i];
        }

        for(int i=0; i<s.size(); i++)
            sum+= data[s[i]-'a'];
        cout<<sum<<endl;
    }

    return 0;
}
