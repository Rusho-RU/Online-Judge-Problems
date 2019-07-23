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
        int n;
        cin>>n;

        string a, b;
        cin>>a>>b;

        int mark = 0;

        for(int i=0; i<n; i++){
            if(b[i]=='N')
                continue;

            if(a[i]==b[i])
                mark++;

            else
                i++;
        }

        cout<<mark<<endl;
    }

    return 0;
}

