#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int data[n], nonzero=n;

        for(int i=0; i<n; i++) cin>>data[i];

        sort(data, data+n);

        int i = 0;

        while(data[i]==0)
            i++, nonzero--;

        int prev = 0;

        while(k--){
            if(nonzero==0){
                cout<<"0\n";
                continue;
            }

            int hold = data[i];

            cout<<hold-prev<<endl;

            while(i<n && data[i]==hold)
                i++, nonzero--;

            prev = hold;
        }
    }

    return 0;
}

