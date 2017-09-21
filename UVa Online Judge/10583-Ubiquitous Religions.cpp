#include <bits/stdc++.h>
using namespace std;

int Parent[50001];

void Reset(int n){
    for(int i=0;i<n;i++)
        Parent[i]=i;
}

int Find(int n){
    if(Parent[n]==n) return n;
    return Parent[n]=Find(Parent[n]);
}

void Union(int x, int y){
    int u=Find(x),v=Find(y);
    if(u!=v){
        Parent[u]=v;
    }
}

int main(){
    int n,m,Case=0;
    while(scanf("%d%d",&n,&m) && n+m){
        int a,b,count=0;
        Reset(n);
        for(int i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            Union(a-1,b-1);
        }

        for(int i=0;i<n;i++)
            if(Parent[i]==i) count++;

        printf("Case %d: %d\n",++Case,count);
    }
    return 0;
}
