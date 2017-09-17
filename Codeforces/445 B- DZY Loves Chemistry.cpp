 #include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m)==2){
        vector<int>v[n+1];
        int i,j,a,b;
        int dist[n+1];
        memset(dist,-1,(n+1)*sizeof (int));
        for(i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }

        queue<int>q;

        for(i=1;i<=n;i++){
            if(dist[i]==-1){
                q.push(i);
                dist[i]=0;
                while(!q.empty()){
                    int x=q.front();
                    q.pop();
                    for(int j=0;j<v[x].size();j++){
                        if(dist[v[x][j]]==-1){
                            dist[v[x][j]]=1;
                            q.push(v[x][j]);
                        }
                    }
                }
            }
        }
        long long danger=1;
        for(i=1;i<=n;i++)
            if(dist[i]==1)
                danger=danger*2;
        printf("%lld\n",danger);
    }
    return 0;
}
