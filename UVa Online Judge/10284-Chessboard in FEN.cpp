#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int chess[8][8];
int X[8]={0,0,1,-1,-1,-1,1,1},Y[8]={1,-1,0,0,-1,1,1,-1};
int kx[8]={-2,-2,-1,-1,1,1,2,2},ky[8]={1,-1,2,-2,2,-2,1,-1};

bool White(int x, int y){
    if(chess[x][y]>='A' && chess[x][y]<='Z') return true;
    return false;
}

bool Black(int x, int y){
    if(chess[x][y]>='A' && chess[x][y]<='Z') return false;
    return true;
}

bool valid(int x, int y){
    if(x>=0 && x<8 && y>=0 && y<8) return true;
    else return false;
}

void King(int x, int y){
    int u,v;
    for(int i=0;i<8;i++){
        u=x+X[i],v=y+Y[i];
        if(valid(u,v))
            if(!chess[u][v])
                chess[u][v]=1;
    }

}

void Root(int x, int y){
    for(int i=0;i<4;i++){
        for(int j=01;j<8;j++){
            int u=x+j*X[i],v=y+j*Y[i];
            if(valid(u,v)){
                if(!chess[u][v])
                    chess[u][v]=1;
                else if(chess[u][v]!=1){
                    break;
                }
            }
            else break;
        }
    }
}

void Queen(int x, int y){
    int u,v;
    for(int i=0;i<8;i++){
        for(int j=1;j<8;j++){
            u=x+j*X[i],v=y+j*Y[i];
            if(valid(u,v)){
                if(!chess[u][v])
                    chess[u][v]=1;
                else if(chess[u][v]!=1){
                    break;
                }
            }
            else break;
        }
    }
}

void Bishop(int x, int y){
    for(int i=4;i<8;i++){
        for(int j=1;j<8;j++){
            int u=x+j*X[i],v=y+j*Y[i];
            if(valid(u,v)){
                if(!chess[u][v])
                    chess[u][v]=1;
                else if(chess[u][v]!=1){
                    break;
                }
            }
            else break;
        }
    }
}

void Knight(int x, int y){
    for(int i=0;i<8;i++){
        int u=x+kx[i],v=y+ky[i];
        if(valid(u,v) && !chess[u][v])
            chess[u][v]=1;
    }
}

void Pawn(int x, int y){
    if(White(x,y)){
        if(valid(x-1,y-1) && !chess[x-1][y-1]) chess[x-1][y-1]=1;
        if(valid(x-1,y+1) && !chess[x-1][y+1]) chess[x-1][y+1]=1;
    }
    else{
        if(valid(x+1,y-1) && !chess[x+1][y-1]) chess[x+1][y-1]=1;
        if(valid(x+1,y+1) && !chess[x+1][y+1]) chess[x+1][y+1]=1;
    }
}

void vai_solve_kore_de(int x, int y){
    if(chess[x][y]==0 || chess[x][y]==1) return;
    char c=chess[x][y];
    if(c=='k' || c=='K')
        King(x,y);

    else if(c=='q' || c=='Q')
        Queen(x,y);

    else if(c=='b' || c=='B')
        Bishop(x,y);

    else if(c=='n' || c=='N')
        Knight(x,y);

    else if(c=='r' || c=='R')
        Root(x,y);

    else
        Pawn(x,y);
}

int main(){
    FasterIO;
    string s;
    while(cin>>s){
        int x=0,y=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='8'){
                y+=s[i]-'0';
            }

            else if(s[i]=='/')
                x++,y=0;

            else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
                if(y==-1) y=0;
                chess[x][y]=s[i];
                y++;
            }
        }

        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                vai_solve_kore_de(i,j);

        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                if(!chess[i][j]) count++;

        cout<<count<<endl;
        memset(chess,0,sizeof chess);
    }

    return 0;
}
