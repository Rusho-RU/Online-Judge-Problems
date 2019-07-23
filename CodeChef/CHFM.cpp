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

        long long data[n], sum=0;

        for(int i=0; i<n; i++){
            cin>>data[i];
            sum+=data[i];
        }

        if(sum%n){
            cout<<"Impossible\n";
            continue;
        }

        long long mean = sum/n;

        int id = -1;

        for(int i=0; i<n; i++){
            if(data[i]==mean){
                id = i+1;
                break;
            }
        }

        if(id==-1)
            cout<<"Impossible\n";
        else
            cout<<id<<endl;
    }

    return 0;
}

