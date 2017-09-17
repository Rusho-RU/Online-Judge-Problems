#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int a[n],i,sum[n],j,temp;
        priority_queue<int>p;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int m=n;
        for(i=0;i<n;i++){
            p.push(a[i]);
            temp=p.top();
            while(temp==m){
                printf("%d ",temp);
                p.pop();
                temp=p.top();
                m--;
            }
            printf("\n");
        }
    }
}
