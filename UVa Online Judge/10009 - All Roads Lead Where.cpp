#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int adj[26][26]={0};
        char c[26][26];
        int n,m,i,hold,j,k;
        char s1[20],s2[20];
        queue<int>q;
        scanf("%d%d",&n,&m);
        int dist[26],flag=0;
        for(i=0;i<26;i++){
            dist[i]=-1;
        }
        for(i=0;i<n;i++){
            scanf("%s %s",s1,s2);
            adj[s1[0]-'A'][s2[0]-'A']=1;
            adj[s2[0]-'A'][s1[0]-'A']=1;
            c[s1[0]-'A'][s1[0]-'A']=s1[0];
            c[s2[0]-'A'][s2[0]-'A']=s2[0];
        }
        scanf("%s%s",s1,s2);
        q.push(s1[0]-'A');
        dist[s1[0]-'A']=0;
        while(!q.empty()){
            int x;
            x=q.front();
            printf("x = %d\n",x);
            q.pop();
            for(i=0,j=0,k=0;i<26;i++){
                //printf("%d\n",adj[x][i]);
                if(adj[x][i]==1){
                    if(dist[i]<0){
                        printf("%c\n",'A'+i);
                    }
                }
            }
            if(flag==1)
                break;
        }
    }
}
