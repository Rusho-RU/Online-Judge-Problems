#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t, n, k;
    cin>>t;

    while(t--){
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cout<<(char)(i%k + 'a');
        cout<<endl;
    }

    return 0;
}

