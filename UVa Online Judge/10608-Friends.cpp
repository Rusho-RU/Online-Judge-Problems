#include <bits/stdc++.h>
using namespace std;

int Parent[30001],Rank[30001],M;

void Reset(int n){
    for(int i=0;i<n;i++)
        Parent[i]=i,Rank[i]=1;
}

int Find(int n){
    if(Parent[n]==n) return n;
    return Parent[n]=Find(Parent[n]);
}

void Union(int x, int y){
    int u=Find(x),v=Find(y);
    if(u!=v){
        Parent[u]=v;
        Rank[v]+=Rank[u];
        M=max(M,Rank[v]);
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,a,b;
        M=1;
        scanf("%d %d",&n,&m);
        Reset(n);
        for(int i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            Union(a-1,b-1);
        }

        printf("%d\n",M);
    }
    return 0;
}
