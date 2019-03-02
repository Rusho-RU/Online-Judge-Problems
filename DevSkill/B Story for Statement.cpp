#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    string p = "programming", c = "coding";

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        bool program = true, coding = true;

        for(int i=0; i<p.size(); i++){
            if(s.find(p[i])){
                program = false;
                break;
            }
        }

        for(int i=0; i<c.size(); i++){
            if(s.find(c[i])){
                coding = false;
                break;
            }
        }

        if(program || coding)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
