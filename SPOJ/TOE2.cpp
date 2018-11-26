#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

char board[3][3];

int hasWon(char ch){
    int cnt = 0;

    if(board[0][0]==ch && board[0][1]==ch && board[0][2]==ch) cnt++;
    if(board[1][0]==ch && board[1][1]==ch && board[1][2]==ch) cnt++;
    if(board[2][0]==ch && board[2][1]==ch && board[2][2]==ch) cnt++;
    if(board[0][0]==ch && board[1][0]==ch && board[2][0]==ch) cnt++;
    if(board[0][1]==ch && board[1][1]==ch && board[2][1]==ch) cnt++;
    if(board[0][2]==ch && board[1][2]==ch && board[2][2]==ch) cnt++;
    if(board[0][0]==ch && board[1][1]==ch && board[2][2]==ch) cnt++;
    if(board[0][2]==ch && board[1][1]==ch && board[2][0]==ch) cnt++;

    return cnt;
}

int main(){
    FasterIO;

    string s;

    while(cin>>s && s[0]!='e'){
        int x = 0, o = 0;

        for(int i=0, k=0; i<3; i++){
            for(int j=0; j<3; j++){
                board[i][j] = s[k++];

                if(board[i][j]=='X')
                    x++;
                else if(board[i][j]=='O')
                    o++;
            }
        }

        int xCount = hasWon('X'), oCount = hasWon('O');

        bool valid = false;

        if((xCount && oCount) || xCount>2 || oCount>1);

        else if(x==o)
            valid = !xCount && oCount;

        else if(x==o+1)
            valid = (x==5 && o==4) || (!oCount && xCount);

        if(valid)
            cout<<"valid"<<endl;
        else
            cout<<"invalid"<<endl;
    }

    return 0;
}

