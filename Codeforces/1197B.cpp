#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        vector<int>v(n);

        int mxi;

        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]==n)
                mxi = i;
        }

        int i=mxi-1, j=mxi+1, top=n;

        while(i>=0 || j<n){
            if(i>=0 && v[i]==top-1)
                i--, top--;
            else if(j<n && v[j]==top-1)
                j++, top--;
            else
                break;
        }

        cout<<(top!=1 ? "NO" : "YES")<<endl;
    }

    return 0;
}

