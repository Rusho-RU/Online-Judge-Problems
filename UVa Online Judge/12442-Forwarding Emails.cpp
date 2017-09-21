#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int ans=0,x,y,rem,adj[n];
        bool visited[n],v[n];
        memset(visited,0,sizeof visited);

        for(int i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            adj[x-1]=y-1;
        }

        for(int i=0;i<n;i++){
            if(!visited[i]){
                memset(v,0,sizeof v);
                int Count=1;
                queue<int>q;
                q.push(i);
                visited[i]=v[i]=true;

                while(!q.empty()){
                    int s=adj[q.front()];
                    q.pop();
                    if(!v[s]){
                        visited[s]=v[s]=true;
                        q.push(s);
                        Count++;
                    }
                }

                if(Count>ans){
                    rem=i+1;
                    ans=Count;
                }
            }
        }

        printf("Case %d: %d\n",++Case,rem);
    }
    return 0;
}
