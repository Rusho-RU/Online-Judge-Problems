#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int n,count=0;
        scanf("%d",&n);
        long long m,nim=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&m);
            if(m==1) count++;
            nim^=m;
        }
        printf("Case %d: ",Case);
        if((nim && count<n) || (count==n && count%2==0)) printf("Alice\n");
        else printf("Bob\n");
    }
    return 0;
}


