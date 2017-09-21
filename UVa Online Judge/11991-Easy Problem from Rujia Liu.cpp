#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    while(scanf("%d%d",&n,&q)==2){
        int a[n+1],i,h1,h2;
        map<long long , map< long long, int> >m;
        map<long long, int>m1;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            m1[a[i]]++;
            m[a[i]][m1[a[i]]]=i+1;
        }

        for(i=0;i<q;i++){
            scanf("%d%d",&h1,&h2);
            if(!m[h2][h1])
                printf("0\n");
            else
                printf("%d\n",m[h2][h1]);
        }
    }
    return 0;
}
