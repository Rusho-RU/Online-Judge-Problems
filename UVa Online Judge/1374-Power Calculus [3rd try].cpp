#include <bits/stdc++.h>
using namespace std;

int data[16],n,l;

void print(){
    for(int i=0;i<16;i++)
        printf("%d ",data[i]);
    printf("\n");
}

bool bfs(int m){
    if(data[m+1]==n) return true;
    if(m==l) return false;
    int h=1;
    for(int i=2;i<=m+1;i++) h=max(h,data[i]);
    if(h<<l-m<n) return false;
    for(int i=m+1;i;i--){
        data[m+2]=data[m+1]+data[i];
        if(bfs(m+1)) return true;
        data[m+2]=data[m+1]-data[i];
        if(bfs(m+1)) return true;
    }
    return false;
}

int main(){
    data[1]=1;
    while(scanf("%d",&n) && n){
        int ans;
        if(n==1){
            printf("0\n");
            continue;
        }

        for(int i=1;i<=13;i++){
            l=i;
            if(bfs(0)){
                ans=i;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
