#include <bits/stdc++.h>
using namespace std;

bool adj[26][26], visited[26];

void Floyd(int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            if(i==k) continue;
            for(int j=0;j<n;j++){
                if(i==j || k==j) continue;
                adj[i][j]=adj[i][j] | (adj[i][k] & adj[k][j]);
            }
        }
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,Case=0;
    bool done=false;
    while(cin>>n>>m && n+m){
        if(!done) done=true;
        else cout<<endl;

        map<string,int>rem;
        vector<string>data;

        memset(adj, false, sizeof adj);
        memset(visited, false, sizeof visited);

        for(int i=0;i<m;i++){
            string s,c;
            int u,v;
            cin>>s>>c;
            if(rem.find(s)==rem.end()){
                data.push_back(s);
                u=data.size()-1;
                rem[s]=u;
            }

            else
                u=rem[s];

            if(rem.find(c)==rem.end()){
                data.push_back(c);
                v=data.size()-1;
                rem[c]=v;
            }

            else
                v=rem[c];

            adj[u][v]=true;
        }

        Floyd(n);

        cout<<"Calling circles for data set "<<++Case<<":"<<endl;

        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            cout<<data[i];
            visited[i]=true;

            for(int j=0;j<n;j++){
                if(i!=j && !visited[j] && adj[i][j] && adj[j][i]){
                    cout<<", "<<data[j];
                    visited[j]=true;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
