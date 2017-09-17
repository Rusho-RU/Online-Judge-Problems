#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int row,col;
        long long n,nim=0,sum;
        scanf("%d %d",&row,&col);
        for(int i=0;i<row;i++){
            sum=0;
            for(int j=0;j<col;j++){
                scanf("%lld",&n);
                sum+=n;
            }
            nim^=sum;
        }

        printf("Case %d: ",Case);
        if(nim) printf("Alice\n");
        else printf("Bob\n");
    }
    return 0;
}

