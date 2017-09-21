#include <bits/stdc++.h>
using namespace std;
int adj[1005];

int path(int n){
    int c;
    if(adj[n]!=1000000) return adj[n];
    else if(n==1) return adj[n]=0;
    else if(n%2==0) c=path(n/2)+1;
    else{
        c=path(n-1)+1;
        if(c<adj[n])
            adj[n]=c;
        c=path(n+1)+1;
    }
    if(c<adj[n]){
        adj[n]=c;
    }
    return adj[n];
}

int main(){
    for(int i=0;i<1005;i++)
        adj[i]=1000000;
    int n;
    vector<int>v;
    while(scanf("%d",&n),n){
        //printf("%d\n",path(n));
        v.push_back(path(n));
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}
