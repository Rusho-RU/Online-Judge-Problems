#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int data[n][m];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>data[i][j];
            }
        }

        int XOR = 0;
        vector<int>v;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((data[i][j]^XOR)>0){
                    XOR^=data[i][j];
                    v.push_back(j+1);
                    break;
                }
            }
        }

        if(v.size()==n){
            cout<<"TAK\n";
            for(auto val : v)
                cout<<val<<" ";
            cout<<endl;
        }

        else{
            cout<<"NIE\n";
        }
    }

    return 0;
}

