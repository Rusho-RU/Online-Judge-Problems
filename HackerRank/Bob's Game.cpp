#include <bits/stdc++.h>
using namespace std;

bool valid(int sx, int sy, int x, int y, int n){
    int check = max(sx,sy);

    if(x!=check && y!=check)
        return false;

    if(x<0 || y<0)
        return false;

    return true;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, cnt=0, king=0, cnt2=0;
        scanf("%d",&n);
        char data[n][n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf(" %c",&data[i][j]);
                if(data[i][j]=='K' && (max(i,j))%2){
                    king++;
                    if(valid(i,j,i-1,j,n))
                        if(data[i-1][j]!='X')
                            cnt++;

                    if(valid(i,j,i,j-1,n))
                        if(data[i][j-1]!='X')
                            cnt++;

                    if(valid(i,j,i-1,j-1,n))
                        if(data[i-1][j-1]!='X')
                            cnt2++;
                }
            }
        }

        if(!cnt)
            puts("LOSE");

        else if(king%2)
            printf("WIN %d\n",cnt2);

        else
            printf("WIN %d\n",cnt);
    }

    return 0;
}
