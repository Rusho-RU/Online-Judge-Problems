#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int main(){
    int n,m,Case=0;
    while(cin>>n>>m && n){
        int adj[n][n],a,b,c;
        memset(adj,INF,sizeof adj);
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }

        for(int i=0;i<m;i++){
            cin>>a>>b>>c;
            adj[a-1][b-1]=adj[b-1][a-1]=c;
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                if(i==k) continue;
                for(int j=0;j<n;j++){
                    if(i==j || j==k) continue;
                    adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }

        int sum,max=INF,rem=0;

        for(int j=0;j<n;j++){
            sum=0;
            for(int i=0;i<n;i++){
                if(i==j) continue;
                sum+=adj[i][j];
            }
            if(sum<max){
                rem=j;
                max=sum;
            }
        }

        cout<<"Case #"<<++Case<<" : "<<s[rem]<<endl;
    }
    return 0;
}
