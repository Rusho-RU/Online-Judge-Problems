#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int n, r;

    while(cin>>n>>r){
        int heater[n];

        for(int i=0; i<n; i++) cin>>heater[i];

        int sum = 0, now = 0, last = INT_MIN;
        bool possible = true;

        for(int i=0; i<n; i++){
            if(heater[i]){
                if(i-r+1 > now){
                    if(last==INT_MIN){
                        possible = false;
                        break;
                    }
                    sum++;
                    now = last+r;
                }
                last = i;
            }
        }

        if(now<n){
            sum++;
            now = last+r;
        }

        if(!possible || now<n){
            cout<<"-1\n";
            continue;
        }

        cout<<sum<<endl;
    }

    return 0;
}
