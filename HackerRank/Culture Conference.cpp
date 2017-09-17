#include <bits/stdc++.h>
using namespace std;

int Parent[100000];
bool Burned[100000];

int Find(int x){
    if(Parent[x]==x) return x;
    return Parent[x]=Find(Parent[x]);
}

int main(){
    int n,x,y,count=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d%d",&x,&y);
        Burned[i]=!y;
        if(!y){
            if(Burned[x]){
                Parent[i]=x;
                Find(i);
            }
            else Parent[i]=i;
        }
    }

    for(int i=1;i<=n;i++)
        if(Parent[i]) count++;
    printf("%d\n",count);
}
