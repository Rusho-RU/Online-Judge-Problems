#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

bool ache[26];
int indegree[26], n;
vector<int>adj[26];
string s;

void reset(){
    n=1;
    for(int i=0; i<26; i++){
        ache[i] = indegree[i] = 0;
        adj[i].clear();
    }
}

void dfs(int cnt){
    if(cnt==n){
        cout<<s<<endl;
        return;
    }

    for(int u=0; u<26; u++){
        if(indegree[u] || !ache[u])
            continue;

        for(auto v : adj[u])
            indegree[v]--;

        s.push_back('a'+u);
        ache[u] = false;

        dfs(cnt+1);

        s.pop_back();
        ache[u] = true;

        for(auto v : adj[u])
            indegree[v]++;
    }

    return;
}

int main(){
    FasterIO;

    char ch, u, v;

    n=1;

    bool first = true;

    while(cin>>ch){
        ache[ch-'a'] = true;

        while(cin.get()==' ' && cin>>ch)
            ache[ch-'a'] = true, n++;

        while(cin>>u>>v){
            indegree[v-'a']++;
            adj[u-'a'].push_back(v-'a');
            if(cin.get()=='\n')
                break;
        }

        if(!first)
            cout<<"\n";
        else
            first = false;

        s="";
        dfs(0);

        reset();
    }

    return 0;
}

