#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int pow2[k];

        fill_n(pow2, k, 1);

        int sum = k;

        for(int i=0; i<k; i++){
            while(sum+pow2[i]<=n){
                sum+=pow2[i];
                pow2[i]*=2;
            }
        }

        if(sum==n){
            cout<<"YES"<<endl;
            for(auto val : pow2)
                cout<<val<<" ";
            cout<<endl;
        }

        else
            cout<<"NO"<<endl;
    }

    return 0;
}


