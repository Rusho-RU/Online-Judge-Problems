#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.get();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<int>v;
        int value,m=0;

        while(ss>>value){
            v.push_back(value);
        }

        for(int i=0;i<v.size()-1;i++){
            for(int j=i+1;j<v.size();j++){
                m=max(m,__gcd(v[i],v[j]));
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
