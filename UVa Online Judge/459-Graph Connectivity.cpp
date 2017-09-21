#include <bits/stdc++.h>
using namespace std;

#define wtf getchar()
char parent[26];

void Fill(int n){
    for(int i=0;i<n;i++)
        parent[i]=i;
}

int Find(int x){
    if(parent[x]==x)
        return x;
    return parent[x]=Find(parent[x]);
}

int main(){
    int t;
    string s;
    char c;
    scanf("%d",&t);
    wtf;
    wtf;
    while(t--){
        int ans,x,y,n,u,v;
        scanf("%c",&c);
        n=ans=c-'A'+1;
        Fill(n);
        wtf;
        while(getline(cin,s) && !s.empty()){
            x=s[0]-'A',y=s[1]-'A';
            u=Find(x),v=Find(y);
            if(u!=v){
                parent[v]=u;
                ans--;
            }
        }

        printf("%d\n",ans);
        if(t) printf("\n");
    }
    return 0;
}
