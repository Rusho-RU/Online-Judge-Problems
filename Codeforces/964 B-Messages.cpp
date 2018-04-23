#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,t;

    while(scanf("%d%d%d%d%d",&n, &a, &b, &c, &t)==5){
        int lastRead = 0;

        int time[n];

        for(int i=0; i<n; i++){
            scanf("%d",&time[i]);
        }

        if(b>=c){
            printf("%d\n",n*a);
            continue;
        }

        for(int i=0; i<n; i++){
            lastRead += a + (t-time[i])*(c-b);
        }

        printf("%d\n",lastRead);
    }

    return 0;
}
