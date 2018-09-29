#include <bits/stdc++.h>
using namespace std;

#define MAX 10050

int parent[MAX];
int outdegree[MAX];
int marbel[MAX];

int bfs(int n){
    int moves=0;
    queue<int>q;

    for(int i=1; i<=n; i++)
        if(outdegree[i]==0)
            q.push(i);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        moves += abs(marbel[node]-1);
        marbel[parent[node]] += marbel[node]-1;
        outdegree[parent[node]]--;

        if(parent[node] && outdegree[parent[node]]==0)
            q.push(parent[node]);
    }

    return moves;
}

void reset(int n){
    for(int i=0; i<=n; i++)
        parent[i] = marbel[i] = outdegree[i] = 0;
}

int main(){
    int n;

    while(scanf("%d",&n) && n){
        for(int i=0; i<n; i++){
            int v, m, d;
            scanf("%d%d%d",&v,&m,&d);
            outdegree[v] += d;
            marbel[v] += m;

            for(int j=0; j<d; j++){
                int child;
                scanf("%d",&child);
                parent[child] = v;
            }
        }

        int ans = bfs(n);
        reset(n);

        printf("%d\n",ans);
    }

    return 0;
}
