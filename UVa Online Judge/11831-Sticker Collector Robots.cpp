#include <bits/stdc++.h>
using namespace std;


char direction[4]={'O','N','L','S'};
int position,ROW,COL;

struct type{
    int x,y;
};

type path(type pos){
    int x=pos.x,y=pos.y;
    if(direction[position]=='O')
        pos.y--;
    else if(direction[position]=='N')
        pos.x--;
    else if(direction[position]=='L')
        pos.y++;
    else
        pos.x++;
    if(pos.x<0 || pos.x==ROW || pos.y<0 || pos.y==COL)
        pos.x=x,pos.y=y;
    return pos;
}

int main(){
    int row,col,instruct;
    while(scanf("%d%d%d",&row,&col,&instruct),row,col,instruct){
        ROW=row,COL=col;
        getchar();
        type pos;
        char MAP[row+2][col+2],c;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%c",&MAP[i][j]);
                if(MAP[i][j]=='N' || MAP[i][j]=='S' || MAP[i][j]=='L' || MAP[i][j]=='O'){
                    pos.x=i,pos.y=j;
                    if(MAP[i][j]=='O') position=0;
                    else if(MAP[i][j]=='N') position=1;
                    else if(MAP[i][j]=='L') position=2;
                    else position=3;
                }
            }
            getchar();
        }

        bool stop=false;
        int count=0;
        for(int i=0;i<instruct;i++){
            scanf("%c",&c);
            if(c=='D'){
                position++;
                position%=4;
            }

            else if(c=='E'){
                position--;
                if(position<0) position=3;
            }

            else{
                int x=pos.x,y=pos.y;
                pos=path(pos);
                if(MAP[pos.x][pos.y]=='*')
                    count++,MAP[pos.x][pos.y]='.';
                else if(MAP[pos.x][pos.y]=='#')
                    pos.x=x,pos.y=y;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
