#include <bits/stdc++.h>
using namespace std;

int Parent[100000],Rank[100000],m;

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
        int h=Find(u);
        Rank[h]+=Rank[u];
        if(Rank[h]>m) m=Rank[h];
    }
}

int main(){
    int node,edge,x,y;
    scanf("%d%d",&node,&edge);
    m=1;
    Reset(node);
    for(int i=0;i<edge;i++){
        scanf("%d%d",&x,&y);
        x--,y--;
        Union(x,y);
    }
    printf("%d\n",m);
    return 0;
}
