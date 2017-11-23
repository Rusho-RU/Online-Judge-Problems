#include <bits/stdc++.h>
using namespace std;

char grid[8][8];
int row, col, dx[] = {0, -1, 0}, dy[] = {-1, 0, 1};
string direction[3] = {"left", "forth", "right"};
string pattern = "IEHOVA#";

queue<string>path;

bool valid(int x, int y){
    if(x>=0 && x<row && y>=0 && y<col)
        return true;
    return false;
}

void dfs(int x, int y, int i){
    if(i==pattern.size())
        return;

    for(int j=0; j<3; j++){
        int X = x + dx[j], Y = y + dy[j];
        if(valid(X,Y) && grid[X][Y] == pattern[i]){
            path.push(direction[j]);
            dfs(X,Y,i+1);
            return;
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&row,&col);

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                scanf(" %c",&grid[i][j]);
            }
        }

        int x,y;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]=='@')
                    x = i, y = j;
            }
        }

        dfs(x,y,0);

        cout<<path.front();
        path.pop();

        while(!path.empty()){
            cout<<" "<<path.front();
            path.pop();
        }

        cout<<endl;
    }

    return 0;
}
