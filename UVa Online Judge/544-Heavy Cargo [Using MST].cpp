#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MAX 201
#define INF 1000000000

struct type{
    int u,v,w;
};

bool comp(const type &a, const type &b){
    return a.w>b.w;
}

int parent[MAX];

int Find(int x){
    if(parent[x]==x) return x;
    else return parent[x]=Find(parent[x]);
}

bool Union(int x, int y){
    int u=Find(x),v=Find(y);
    if(u!=v){
        parent[u]=v;
        Find(u);
        return true;
    }
    return false;
}

int main(){
    int n,edge,Case=0;
    while(cin>>n>>edge && n || edge){
        map<string,int>data;
        vector<type>v;
        type hold;
        string s1,s2;
        int w,count=0;

        for(int i=0;i<edge;i++){
            cin>>s1>>s2>>w;
            if(data.find(s1)==data.end()) data[s1]=count++;
            if(data.find(s2)==data.end()) data[s2]=count++;
            int x=data[s1],y=data[s2];
            parent[x]=x,parent[y]=y;
            v.push_back({x,y,w});
        }

        for(int i=count;i<n;i++)
            parent[i]=i;

        sort(v.begin(),v.end(),comp);
        cin>>s1>>s2;
        int source=data[s1],destination=data[s2],m=INF;

        for(int i=0;i<v.size() && Find(source)!=Find(destination);i++){
            if(Union(v[i].u,v[i].v)){
                m=min(m,v[i].w);
            }
        }
        cout<<"Scenario #"<<++Case<<endl<<m<<" tons"<<endl<<endl;
    }
    return 0;
}
