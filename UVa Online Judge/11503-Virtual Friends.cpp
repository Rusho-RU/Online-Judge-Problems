#include <bits/stdc++.h>
using namespace std;

#define MAX 100002

int parent[MAX],Rank[MAX];

void Reset(int n){
    for(int i=0;i<=n;i++)
        Rank[i]=1,parent[i]=i;
}

int Find(int n){
    if(parent[n]==n) return n;
    else return parent[n]=Find(parent[n]);
}

int Union(int x, int y){
    int u=Find(x),v=Find(y);
    if(u!=v){
        parent[u]=Find(v);
        Rank[parent[u]]+=Rank[u];
    }

    return Rank[parent[u]];
}

int main(){
    ios::sync_with_stdio(false);
    Reset(MAX-1);
    string s1,s2;
    int t;
    //scanf("%d",&t);
    cin>>t;

    while(t--){
        int n;
        //scanf("%d",&n);
        cin>>n;

        unordered_map<string,int>data;
        int count=0;

        while(n--){
            cin>>s1>>s2;
            if(data.find(s1)==data.end()) data[s1]=++count;
            if(data.find(s2)==data.end()) data[s2]=++count;
            int x=data[s1],y=data[s2],ans=Union(x,y);
            //printf("%d\n",ans);
            cout<<ans<<endl;
        }

        Reset(count);
    }
    return 0;
}
