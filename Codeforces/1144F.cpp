#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;
#define MAX 200010

vector<int>adj[MAX];
int level[MAX];

int main(){
    FasterIO;

    int n, m;
    cin>>n>>m;

    map<pair<int, int>, int>mp;
    string s(m, ' ');

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;

        mp[make_pair(u, v)] = i;
        mp[make_pair(v, u)] = i;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<int>q;
    q.push(1);
    level[1] = 1;

    bool possible = true;

    while(!q.empty() && possible){
        int u = q.front();
        cout<<level[u]<<endl;
        q.pop();

        for(auto v : adj[u]){
            if(level[v]){
                int cycle = level[u] - level[v] + 1;
                if(cycle&1)
                    possible = false;
                s[mp[{u, v}]] = (level[v]&1) + '0';
            }

            else{
                level[v] = level[u]+1;
                q.push(v);
                s[mp[{u, v}]] = (level[u]&1) + '0';
            }
        }
    }

    if(!possible)
        cout<<"No\n";
    else{
        cout<<"Yes\n"<<s<<endl;
    }

    return 0;
}

