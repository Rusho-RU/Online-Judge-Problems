#include <bits/stdc++.h>
using namespace std;

int dx[] = { 2,  1, -1, -2, -2, -1,  1,  2};
int dy[] = {-1, -2, -2, -1,  1,  2,  2,  1};

bool valid(int x, int y){
    if(x>=1 && x<=8 && y>=1 && y<=8)
        return true;
    return false;
}

int main(){
    int t, Case = 0;
    scanf("%d",&t);

    while(t--){
        int sx, sy, cnt=0;
        scanf("%d %d",&sx,&sy);

        for(int i=0; i<8; i++){
            int x = sx + dx[i];
            int y = sy + dy[i];

            if(valid(x, y))
                cnt++;
        }

        printf("Case %d: %d\n", ++Case, cnt);
    }
}
