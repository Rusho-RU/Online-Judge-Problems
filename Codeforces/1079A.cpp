#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        map<int, int>mp;

        int val;

        for(int i=0; i<n; i++){
            cin>>val;
            mp[val]++;
        }

        int mx = 0;

        for(auto v : mp)
            mx = max(mx, v.second);

        int dorkar = mx/k;

        if(mx%k)
            dorkar++;

        dorkar*=k;

        int sum=0;

        for(auto v: mp)
            sum+=dorkar-v.second;

        cout<<sum<<endl;
    }

    return 0;
}
