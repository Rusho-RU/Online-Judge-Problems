#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++){
            if(s[i]<'5')
                s[i] = ('9' - s[i]) + '0';
        }

        cout<<s<<endl;
    }

    return 0;
}

