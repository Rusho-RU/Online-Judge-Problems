#include <bits/stdc++.h>
using namespace std;

#define MAX 101
#define INF 0x3f3f3f3f

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int n,r,a,b,source,destination;
        scanf("%d%d",&n,&r);
        vector<int>cost[n];
        int dist1[n];
        memset(dist1,-1,sizeof dist1);

        for(int i=0;i<r;i++){
            scanf("%d%d",&a,&b);
            cost[a].push_back(b);
            cost[b].push_back(a);
        }

        scanf("%d %d",&source,&destination);

        queue<int>q;
        q.push(source);
        dist1[source]=0;

        while(!q.empty()){
            int s=q.front();
            q.pop();
            for(int i=0;i<cost[s].size();i++){
                int x=cost[s][i];
                if(dist1[x]==-1){
                    dist1[x]=dist1[s]+1;
                    q.push(x);
                }
            }
        }

        int dist2[n];
        memset(dist2,-1,sizeof dist2);
        q.push(destination);
        dist2[destination]=0;

        while(!q.empty()){
            int s=q.front();
            q.pop();
            for(int i=0;i<cost[s].size();i++){
                int x=cost[s][i];
                if(dist2[x]==-1){
                    dist2[x]=dist2[s]+1;
                    q.push(x);
                }
            }
        }

        int ans=0;

        for(int i=0;i<n;i++)
            ans=max(ans,dist1[i]+dist2[i]);

        printf("Case %d: %d\n",++Case,ans);
    }

    return 0;
}


