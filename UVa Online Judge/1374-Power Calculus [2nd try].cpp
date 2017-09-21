#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int main(){
    int dist[1001],i,Minus,Plus;
    memset(dist,-1,1001*sizeof(int));
    queue<int>q;
    q.push(1);
    dist[1]=0;
    vector<int>v;
    bool found=false;
    while(!found){
        int x=q.front();
        //printf("%d\n",x);
        q.pop();
        v.push_back(x);
        for(i=0;i<v.size();i++){
            if(x==v[i] || dist[x]!=dist[v[i]]){
                Plus=x+v[i],Minus=x-v[i];
                if(dist[Plus]==-1){
                    if(Plus==31) printf("%d\n",x);
                    dist[Plus]=dist[x]+1;
                    q.push(Plus);
                }
                if(dist[Minus]==-1){
                    dist[Minus]=dist[x]+1;
                    q.push(Minus);
                }

                if(Plus==MAX){
                    found=true;
                    break;
                }
            }
        }
    }
    int n;
    while(scanf("%d",&n)){
        printf("%d\n",dist[n]);
    }
    return 0;
}
