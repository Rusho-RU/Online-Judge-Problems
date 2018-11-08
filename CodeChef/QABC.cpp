#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n], b[n], diff[n];
        bool possible = true;

        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        for(int i=0; i<n; i++)
            diff[i] = b[i] - a[i];

        for(int i=0; i<n-2; i++){
            if(diff[i]>0){
                diff[i+1] -= diff[i]*2;
                diff[i+2] -= diff[i]*3;
                diff[i] = 0;
            }
        }

        for(int i=0; i<n; i++){
            if(diff[i]){
                possible = false;
                break;
            }
        }

        if(possible)
            cout<<"TAK\n";
        else
            cout<<"NIE\n";
    }

    return 0;
}
