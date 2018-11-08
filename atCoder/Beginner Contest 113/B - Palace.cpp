#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    while(cin>>n){
        double t, a;
        cin>>t>>a;

        double mn = 1000000000;
        int ans = 0;

        for(int i=0; i<n; i++){
            double val;
            cin>>val;

            double temp = t - (val*0.006);

            if(abs(temp-a) < mn){
                mn = abs(temp-a);
                ans = i;
            }
        }

        cout<<(ans+1)<<endl;
    }
}
