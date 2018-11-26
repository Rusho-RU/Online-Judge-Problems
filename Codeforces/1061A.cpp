#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX (long long)1e8

char board[3][3];
char c[3] = {'X', 'O', '.'};

bool hasWon(char ch){
    if(board[0][0]==ch && board[0][1]==ch && board[0][2]==ch) return true;
    if(board[1][0]==ch && board[1][1]==ch && board[1][2]==ch) return true;
    if(board[2][0]==ch && board[2][1]==ch && board[2][2]==ch) return true;
    if(board[0][0]==ch && board[1][0]==ch && board[2][0]==ch) return true;
    if(board[0][1]==ch && board[1][1]==ch && board[2][1]==ch) return true;
    if(board[0][2]==ch && board[1][2]==ch && board[2][2]==ch) return true;
    if(board[0][0]==ch && board[1][1]==ch && board[2][2]==ch) return true;
    if(board[0][2]==ch && board[1][1]==ch && board[2][0]==ch) return true;

    return false;
}

bool solve(long long n){
    for(int i=0, k=0; i<3; i++){
        for(int j=0; j<3; j++){
            board[i][j] = c[n%3];
        }
    }

    return hasWon('X');
}

int main(){
    FasterIO;

    int n, s;

    while(cin>>n>>s){
        bool ans1 = false;

        for(long long i=0; i<MAX; i++){
            ans1 |= solve(i);
        }

        int ans = s/n;
        if(s%n)
            ans++;
        cout<<ans<<endl;
    }

    return 0;
}

