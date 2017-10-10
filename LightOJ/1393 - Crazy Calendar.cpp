#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(int Case=1;Case<=t;Case++){
        int row,col;
        scanf("%d %d",&row,&col);
        long long m,nim=0;
        int hold=(row+col)%2;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%lld",&m);
                if((i+j)%2!=hold){
                    nim^=m;
                }
            }
        }

        printf("Case %d: ",Case);
        if(nim) printf("win\n");
        else printf("lose\n");
    }
    return 0;
}
