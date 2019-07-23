#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define MAX 1010
vector<int>adj[MAX];
int indegree[MAX];

void reset(){
    for(int i=0; i<MAX; i++)
        adj[i].clear(), indegree[i] = 0;
}

int main(){
    int t, Case=0;

    scanf("%d", &t);

    while(t--){
        reset();
        int n, m;
        scanf("%d%d",&n, &m);

        while(m--){
            int u, v;
            scanf("%d %d", &v, &u);
            adj[u].push_back(v);
            indegree[v]++;
        }

        queue<pair<int, int> >q;
        vector<pair<int, int> >v;

        for(int i=0; i<n; i++)
            if(indegree[i]==0)
                q.push({1, i});

        while(!q.empty()){
            int u = q.front().second;
            int level = q.front().first;

            v.push_back(q.front());
            q.pop();

            for(auto v : adj[u]){
                indegree[v]--;
                if(indegree[v]==0)
                    q.push({level+1, v});
            }
        }

        sort(all(v));

        printf("Scenario #%d:\n", ++Case);
        for(auto p : v)
            printf("%d %d\n", p.first, p.second);
    }

    return 0;
}
