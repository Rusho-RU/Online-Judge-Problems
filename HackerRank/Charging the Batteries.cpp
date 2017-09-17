#include <bits/stdc++.h>
using namespace std;

int n;

int calculate(int x, int y){
    if(y==0) return x;
    if(x==n) return n+y;
    if(y==n) return 3*n-x;
    return 4*n-y;
}

int main(){
    int m,k;

    while(cin>>n>>m>>k){
        vector<int>dist;
        int x,y;

        for(int i=0;i<m;i++){
            cin>>x>>y;
            dist.push_back(calculate(x,y));
            dist.push_back(calculate(x,y)+4*n);
        }

        sort(dist.begin() ,dist.end());
        int ans=(int)1e7;

        for(int i=0;i<dist.size()-k+1;i++)
            ans=min(ans,dist[i+k-1]-dist[i]);

        printf("%d\n",ans);
    }

    return 0;
}
