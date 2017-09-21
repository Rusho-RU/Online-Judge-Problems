#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        map<string,int>cities;
        int cost[n][n];
        memset(cost,INF,sizeof cost);

        for(int i=0;i<n;i++){
            cin>>s1;
            cities[s1]=i;
            cost[i][i]=0;
        }

        int road,c;
        scanf("%d",&road);

        for(int i=0;i<road;i++){
            cin>>s1>>s2>>c;
            int h1=cities[s1],h2=cities[s2];
            if(c<cost[h1][h2])
                cost[h1][h2]=cost[h2][h1]=c;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(i==k) continue;
                for(int j=0;j<n;j++){
                    if(j==i || j==k) continue;
                    cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%10d ",cost[i][j]);
            }
            printf("\n");
        }

        int q;
        printf("%d %d\n",h1,h2);
        //scanf("%d",&q);
        //while(q--){
            //cin>>n;

        //}
    }
}
