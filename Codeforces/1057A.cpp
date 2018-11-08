#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    int n;

    while(cin>>n){
        int parent[n+1];

        for(int v=2; v<=n; v++){
            int u;
            cin>>u;
            parent[v] = u;
        }

        stack<int>path;
        path.push(n);
        int v = n, u;

        while(v != 1){
            v = parent[v];
            path.push(v);
        }

        while(!path.empty()){
            cout<<path.top()<<" ";
            path.pop();
        }

        cout<<endl;
    }

    return 0;
}
