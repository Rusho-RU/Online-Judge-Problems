#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string t,s;
    int k;

    while(cin>>t>>s>>k){
        int index = min(s.size(), t.size());

        for(int i=0; i<s.size() && i<t.size(); i++){
            if(s[i]!=t[i]){
                index = i;
                break;
            }
        }

        int dlt = s.size()-index;
        int add = t.size() - index;
        int steps = add+dlt;

        if(steps <= k){
            if(steps==k)
                cout<<"Yes"<<endl;
            else{
                int hold = k-steps;
                if(hold%2){
                    if(s.size()+t.size()<k)
                        cout<<"Yes"<<endl;
                    else
                        cout<<"No"<<endl;
                }
                else
                    cout<<"Yes"<<endl;
            }
        }
        else
            cout<<"No"<<endl;
    }

    return 0;
}
