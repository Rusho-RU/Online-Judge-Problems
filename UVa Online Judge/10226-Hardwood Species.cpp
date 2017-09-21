#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    FasterIO;
    int t;
    cin>>t;
    cin.get();
    cin.get();
    while(t--){
        string s;
        int population=0;
        map<string,int>tree;
        while(getline(cin,s) && !s.empty()){
            tree[s]++;
            population++;
        }

        cout<<setprecision(4)<<fixed;
        map<string,int>::iterator it=tree.begin();
        for(;it!=tree.end();it++){
            double d=(100.0*it->second)/population;
            cout<<it->first<<" "<<d<<endl;
        }
        if(t) cout<<endl;
    }
    return 0;
}
