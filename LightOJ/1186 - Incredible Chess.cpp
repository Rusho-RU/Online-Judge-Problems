#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int dimension;
        scanf("%d",&dimension);
        int white[dimension];
        for(int i=0;i<dimension;i++)
            scanf("%d",&white[i]);
        int nim=0,temp;
        for(int i=0;i<dimension;i++){
            scanf("%d",&temp);
            nim^=(temp-white[i]-1);
        }
        printf("Case %d: ",Case);
        if(nim) printf("white wins\n");
        else printf("black wins\n");
    }
    return 0;
}
