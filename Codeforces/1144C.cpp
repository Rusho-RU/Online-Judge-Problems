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

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n);

        int cnt = 1;
        bool possible = true;
        vector<int>dec, inc;

        inc.push_back(data[0]);

        for(int i=1; i<n; i++){
            if(data[i]==data[i-1]){
                cnt++;
                if(cnt>2){
                    possible = false;
                    break;
                }
                dec.push_back(data[i]);
            }
            else{
                inc.push_back(data[i]);
                cnt=1;
            }
        }

        if(!possible){
            cout<<"No\n";
        }

        else{
            cout<<"Yes\n";
            sort(all(dec), greater<int>());

            cout<<inc.size()<<endl;
            for(auto v : inc)
                cout<<v<<" ";
            cout<<endl;

            cout<<dec.size()<<endl;
            for(auto v : dec)
                cout<<v<<" ";
            cout<<endl;
        }
    }

    return 0;
}

