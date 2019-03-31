#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];
        vector<int>odd, even;

        for(int i=0; i<n; i++){
            cin>>data[i];
            if(data[i]&1)
                odd.push_back(data[i]);
            else
                even.push_back(data[i]);
        }

        sort(all(odd));
        sort(all(even));

        while(!odd.empty() && !even.empty()){
            odd.pop_back();
            even.pop_back();
        }

        if(even.size() > odd.size())
            even.pop_back();
        else if(odd.size() > even.size())
            odd.pop_back();

        int sum = 0;

        for(auto v : odd)
            sum+=v;
        for(auto v : even)
            sum+=v;

        cout<<sum<<endl;
    }

    return 0;
}

