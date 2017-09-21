#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){
    FasterIO;
    int n,edge,Case=0;
    while(cin>>n>>edge && n || edge){
        unordered_map<string,int>data;
        int count=0,w,weight[201][201]={};
        string s1,s2;

        for(int i=0;i<edge;i++){
            cin>>s1>>s2>>w;
            if(data.find(s1)==data.end()) data[s1]=count++;
            if(data.find(s2)==data.end()) data[s2]=count++;
            int x=data[s1],y=data[s2];
            weight[x][y]=weight[y][x]=w;
        }

        cin>>s1>>s2;
        int source=data[s1],destination=data[s2];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                for(int k=0;k<n;k++){
                    if(i==k || j==k) continue;
                    weight[i][j]=max(weight[i][j],min(weight[i][k],weight[k][j]));
                }
            }
        }

        cout<<"Scenario #"<<++Case<<endl<<weight[source][destination]<<" tons"<<endl<<endl;
    }
    return 0;
}
