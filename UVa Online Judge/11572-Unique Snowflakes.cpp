#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,v,ans=0,hold;
        scanf("%d",&n);
        unordered_map<int,bool>m;
        queue<int>q;

        for(int i=0;i<n;i++){
            scanf("%d",&v);
            q.push(v);
            if(m[v]){
                while(q.front()!=v)
                    m[q.front()]=false,q.pop();
                q.pop();
            }

            else m[v]=true;

            hold=q.size();
            ans=max(ans,hold);
        }

        hold=q.size();
        ans=max(ans,hold);

        printf("%d\n",ans);
    }
    return 0;
}
