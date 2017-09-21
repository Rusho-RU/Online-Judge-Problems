#include <bits/stdc++.h>
using namespace std;

#define fasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int parent[5001],Rank[5001],m;

int Find(int x){
    if(parent[x]==x) return x;
    else return parent[x]=Find(parent[x]);
}

void Union(int x, int y){
    int u=Find(x),v=Find(y);
    if(u!=v){
        parent[u]=Find(v);
        Rank[parent[u]]+=Rank[u];
        m=max(m,Rank[parent[u]]);
    }
}

int main(){
    fasterIO;
    int num,edge;
    string s1,s2;
    while(cin>>num>>edge && num || edge){
        unordered_map<string,int>creature;
        m=1;
        for(int i=0;i<num;i++){
            cin>>s1;
            creature[s1]=i;
            parent[i]=i;
            Rank[i]=1;
        }

        for(int i=0;i<edge;i++){
            cin>>s1>>s2;
            int x=creature[s1],y=creature[s2];
            Union(x,y);
        }

        cout<<m<<endl;
    }
    return 0;
}
