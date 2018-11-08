#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    while(cin>>n){
        vector<int>adj[n+1];
        vector<int>superior;

        for(int i=1; i<=n; i++){
            int p;
            cin>>p;

            if(p!=-1)
                adj[p].push_back(i);
            else
                superior.push_back(i);
        }

        queue<int>q;
        int level[n+1];
        bool visited[n+1];

        memset(visited, false, sizeof visited);

        for(int i=0; i<superior.size(); i++){
            int s = superior[i];
            if(!visited[s]){
                q.push(s);
                level[s] = 1;

                while(!q.empty()){
                    int u = q.front();
                    q.pop();

                    for(int i=0; i<adj[u].size(); i++){
                        int v = adj[u][i];
                        if(!visited[v]){
                            level[v] = level[u]+1;
                            visited[v] = true;
                            q.push(v);
                        }
                    }
                }
            }
        }

        int mx = INT_MIN;
        for(int i=1; i<=n; i++)
            mx = max(mx, level[i]);

        cout<<mx<<endl;
    }
}
