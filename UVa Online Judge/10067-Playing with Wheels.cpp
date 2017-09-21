#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

int dist[MAX],direction[8]={1000,-1000,100,-100,10,-10,1,-1};
bool forbidden[MAX];

int valid(int n, int i){
    int temp=n+direction[i],hold=i;
    if(i&1) hold=i-1;
    int div=10*direction[hold];
    int c1=n/div,c2=(temp/div);

    if(c1!=c2 || temp<0) return temp-10*direction[i];

    else return temp;
}

void Reset(){
    for(int i=0;i<MAX;i++){
        dist[i]=-1;
        forbidden[i]=false;
    }
}

int take(){
    int temp,num=0;
    for(int i=0;i<4;i++){
        scanf("%d",&temp);
        num=num*10+temp;
    }
    return num;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int initial,target;
        initial=take();
        Reset();
        target=take();
        int n,num;
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            num=take();
            forbidden[num]=true;
        }

        queue<int>q;
        q.push(initial);
        dist[initial]=0;
        bool found=false;

        while(!q.empty() && !found){
            int s=q.front();
            q.pop();

            for(int i=0;i<8;i++){
                int x=valid(s,i);
                if(x>=0 && x<MAX && dist[x]==-1 && !forbidden[x]){
                    dist[x]=dist[s]+1;
                    if(x==target) found=true;
                    q.push(x);
                }
            }
        }

        printf("%d\n",dist[target]);
    }
    return 0;
}
