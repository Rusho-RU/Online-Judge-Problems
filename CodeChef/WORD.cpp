#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        string a, b;

        cin>>a>>b;

        int i=0, j=0;

        while(i<a.size() && j<b.size()){
            while(i<a.size() && a[i]!=b[j])
                i++;
            if(i<a.size() && a[i]==b[j])
                j++;
        }

        if(j==b.size())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

