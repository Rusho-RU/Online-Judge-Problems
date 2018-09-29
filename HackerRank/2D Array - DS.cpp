#include <bits/stdc++.h>
using namespace std;

int dx[7] = {0,  0,  0, -1, -2, -2, -2};
int dy[7] = {0, -1, -2, -1, -2, -1,  0};

int main(){
    int grid[6][6];
    int sum = 0, mx = INT_MIN;

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d", &grid[i][j]);
        }
    }

    for(int i=2; i<6; i++){
        for(int j=2; j<6; j++){
            sum=0;
            for(int k=0; k<7; k++){
                int x = i+dx[k];
                int y = j+dy[k];
                sum+=grid[x][y];
            }
            mx = max(mx, sum);
        }
    }

    printf("%d\n",mx);

    return 0;
}
