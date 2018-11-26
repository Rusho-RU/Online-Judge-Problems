#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

int main(){
    FasterIO;

    int n, m, l;

    while(cin>>n>>m>>l){
        vector<int>data;

        for(int i=0; i<n; i++){
            int v;
            cin>>v;
            data.push_back(v);
        }

        while(m--){
            int q;
            cin>>q;

            if(q){
                int id, l;
                cin>>id>>l;
                data[id-1]+=l;
            }

            else{

            }
        }
    }

    return 0;
}
