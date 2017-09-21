#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MAX 26

int M_cost[MAX][MAX], S_cost[MAX][MAX];

void Miguel(){
    for(int k=0;k<MAX;k++){
        for(int i=0;i<MAX;i++){
            if(i==k) continue;
            for(int j=0;j<MAX;j++){
                if(j==i || j==k) continue;
                M_cost[i][j]=min(M_cost[i][j],M_cost[i][k]+M_cost[k][j]);
            }
        }
    }
}

void Shahriar(){
    for(int k=0;k<MAX;k++){
        for(int i=0;i<MAX;i++){
            if(i==k) continue;
            for(int j=0;j<MAX;j++){
                if(j==i || j==k) continue;
                S_cost[i][j]=min(S_cost[i][j],S_cost[i][k]+S_cost[k][j]);
            }
        }
    }
}

int solve(int h1, int h2){
    int m=INF;

    for(int i=0;i<MAX;i++){
        if(S_cost[h1][i]==INF || M_cost[h2][i]==INF) continue;

        m=min(m,S_cost[h1][i]+M_cost[h2][i]);
    }
    return m;
}

int main(){
    int n,c;
    char age,direction,a,b;
    while(scanf("%d",&n) && n){
        memset(S_cost,INF,sizeof S_cost);
        memset(M_cost,INF,sizeof M_cost);

        for(int i=0;i<n;i++){
            scanf(" %c %c %c %c %d",&age,&direction,&a,&b,&c);
            int h1=a-'A', h2=b-'A';

            if(age=='Y'){
                S_cost[h1][h2]=c;
                if(direction=='B') S_cost[h2][h1]=c;
            }

            else{
                M_cost[h1][h2]=c;
                if(direction=='B') M_cost[h2][h1]=c;
            }

            S_cost[h1][h1]=M_cost[h1][h1]=S_cost[h2][h2]=M_cost[h2][h2]=0;
        }



        Miguel(),Shahriar();

        scanf(" %c %c",&a,&b);
        int h1=a-'A',h2=b-'A';
        int minimum=solve(h1,h2);
        vector<char>v;

        for(int i=0;i<MAX;i++){
            if(S_cost[h1][i]==INF || M_cost[h2][i]==INF) continue;
            int hold=S_cost[h1][i]+M_cost[h2][i];
            if(hold==minimum) v.push_back(i+'A');
        }

        if(v.empty() || minimum==INF) printf("You will never meet.\n");
        else{
            printf("%d",minimum);
            for(int i=0;i<v.size();i++)
                printf(" %c",v[i]);
            printf("\n");
        }
    }
    return 0;
}
