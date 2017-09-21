#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    while(scanf("%d%d",&n,&x)==2){
        int a[n], cnt=0;

        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        int h=0,j;

        for(int i=0; i<x; i++){
            for(j=0; j<n;j++)
            if(a[j]==i)
                break;

            if(j==n)
                cnt++;
        }

        for(int i=0;i<n;i++)
            if(a[i]==x){
                cnt++;
                break;
            }

        printf("%d\n",cnt);
    }
}
