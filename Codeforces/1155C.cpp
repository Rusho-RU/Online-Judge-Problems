#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        long long time[n], option[m];

        for(int i=0; i<n; i++)
            cin>>time[i];

        for(int i=0; i<m; i++)
            cin>>option[i];

        vector<long long>v;

        for(int i=1; i<n; i++)
            v.push_back(time[i]-time[i-1]);

        long long GCD = v[0];

        for(int i=1; i<v.size(); i++)
            GCD = __gcd(GCD, v[i]);

        int id = -1;
        for(long long i=0; i<m; i++){
            if(GCD%option[i]==0){
                id = i+1;
                break;
            }
        }

        if(id==-1){
            cout<<"NO\n";
        }

        else{
            cout<<"YES\n";
            cout<<time[0]<<" "<<id<<endl;
        }
    }

    return 0;
}

