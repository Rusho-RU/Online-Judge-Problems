#include <bits/stdc++.h>
using namespace std;

#define MAX 2050
#define node first
#define len second

int n;
bool visited[MAX];
vector<int>adj[MAX];

int bfs(int d){
    memset(visited, false, sizeof visited);

    queue<pair<int, int> >q;
    q.push(make_pair(d, 0));
    visited[d] = true;

    while(!q.empty()){
        int u = q.front().node;
        int l = q.front().len;
        q.pop();

        for(int v : adj[u]){
            if(!visited[v]){
                q.push(make_pair(v, l+1));
                visited[v] = true;
            }

            else if(v==d){
                return l+1;
            }
        }
    }

    return -1;
}

void print(){
    puts("NO WAY");
}

void print(int n){
    printf("%d\n",n);
}

void reset(int n){
    for(int i=0; i<n; i++)
        adj[i].clear();
}

int main(){
    while(scanf("%d",&n)==1){
        reset(n);
        int hasPath;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf("%d",&hasPath);
                if(hasPath)
                    adj[i].push_back(j);
            }
        }

        for(int u=0;  u<n; u++){
            int length = bfs(u);

            length==-1 ? print() : print(length);
        }
    }

    return 0;
}
