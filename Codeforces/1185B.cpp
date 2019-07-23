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

        int na = a.size(), nb = b.size();

        int ia=1, ib=1;

        while(ia<na && ib<nb){
            int ca=1, cb=1;

            while(ia<na && a[ia-1]==a[ia++])
                ca++;

            while(ib<nb && b[ib-1]==b[ib++])
                cb++;

            //if(cb<ca)
              //  break;

            cout<<ia<<" "<<ib<<endl;
        }

        cout<<ia<<" "<<ib<<endl;

        if(ia==na && ib==nb)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

