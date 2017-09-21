#include <bits/stdc++.h>
using namespace std;

#define INF (int)1e7

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)==2){
        int woke[n];
        memset(woke,INF,sizeof woke);
        char c;
        vector<int>node[26];

        scanf(" %c",&c);
        woke[c-'A']=0;
        scanf("%c",&c);
        woke[c-'A']=0;
        scanf("%c",&c);
        woke[c-'A']=0;

        for(int i=0;i<m;i++){
            char u,v;
            scanf(" %c%c",&u,&v);
            node[u-'A'].push_back(v-'A');
            node[v-'A'].push_back(u-'A');
        }

        int connected=3,year=0,cnt, ans=(int)1e5;

        for(int k=0;k<n && connected!=n;k++){
            for(int i=0;i<n;i++){
                if(woke[i]) continue;
                cnt=0;
                for(int j=0;j<node[i].size();j++){
                    if(woke[node[i][j]]) cnt++;
                }

                if(cnt>2){
                    woke[i]=true, connected++, year++;
                    printf("%d\n",i);
                }
            }
        }

        if(connected==n) printf("WAKE UP IN, %d, YEARS\n",ans);
        else printf("THIS BRAIN NEVER WAKES UP\n");
    }
    return 0;
}
