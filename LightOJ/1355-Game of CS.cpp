#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int n,node1,node2,weight;
        scanf("%d",&n);
        map<int,int>node;
        for(int i=1;i<n;i++){
            scanf("%d%d%d",&node1,&node2,&weight);
            node[node1]+=weight;
        }
        map<int,int>::iterator it=node.begin();
        int XOR=it->second;
        it++;
        for(;it!=node.end();it++)
            XOR=XOR^it->second;
        printf("Case %d: ",Case);
        if(XOR%2==0) printf("Jolly\n");
        else printf("Emily\n");
    }
    return 0;
}
