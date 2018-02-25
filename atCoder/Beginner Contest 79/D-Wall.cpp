#include <bits/stdc++.h>
using namespace std;

int grid[10][10];

int main(){
    int r,c;

    while(scanf("%d%d",&r,&c)==2){
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                scanf("%d",&grid[i][j]);
            }
        }

        for(int k=0; k<10; k++){
            for(int i=0; i<10; i++){
                for(int j=0; j<10; j++){
                    grid[i][j] = min(grid[i][j], grid[i][k] + grid[k][j]);
                }
            }
        }

        int sum = 0, val;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                scanf("%d",&val);
                if(val!=-1 && val != 1)
                    sum += grid[val][1];
            }
        }

        printf("%d\n",sum);
    }
}
