#include <bits/stdc++.h>
using namespace std;

char board[3][3];

bool hasWon(char ch){
    if(board[0][0]==ch && board[0][1]==ch && board[0][2]==ch) return false;
    if(board[1][0]==ch && board[1][1]==ch && board[1][2]==ch) return false;
    if(board[2][0]==ch && board[2][1]==ch && board[2][2]==ch) return false;
    if(board[0][0]==ch && board[1][0]==ch && board[2][0]==ch) return false;
    if(board[0][1]==ch && board[1][1]==ch && board[2][1]==ch) return false;
    if(board[0][2]==ch && board[1][2]==ch && board[2][2]==ch) return false;
    if(board[0][0]==ch && board[1][1]==ch && board[2][2]==ch) return false;
    if(board[0][2]==ch && board[1][1]==ch && board[2][0]==ch) return false;

    return true;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int x = 0, o = 0;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                scanf(" %c",&board[i][j]);
                if(board[i][j]=='X')
                    x++;
                else if(board[i][j]=='O')
                    o++;
            }
        }

        bool possible = false;

        if(x==o)
            possible = hasWon('X');
        else if(x==o+1)
            possible = hasWon('O');

        puts(possible ? "yes" : "no");
    }

    return 0;
}
