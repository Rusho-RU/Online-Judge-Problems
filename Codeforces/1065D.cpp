#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 11

int board[MAX][MAX], last, n, nx, ny;

int dxk[] = { -2, -2, -1, 1, 2, 2, 1, -1 };
int dyk[] = { -1, 1, 2, 2, 1, -1, -2, -2 };

int dxr[] = {1, -1, 0,  0};
int dyr[] = {0,  0, 1, -1 };

int dxb[] = {-1, -1, 1,  1};
int dyb[] = { 1, -1, 1, -1};

///0 = rook, 1 = bishop, 2 = knight

pair<int, int> dp[MAX][MAX][3];
bool visited[MAX][MAX];

bool valid(int x, int y){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    return false;
}

pair<int, int> nextOf(int sx, int sy){
    int nxt = board[sx][sy]+1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j]==nxt)
                return make_pair(i, j);
        }
    }

    return make_pair(-1, -1);
}

pair<int, int> minimum(pair<int, int>a, pair<int, int>b){
    if(a.first==b.first){
        if(a.second < b.second)
            return a;
        else
            return b;
    }

    else if(a.first < b.first)
        return a;
    return b;
}

pair<int, int> recur(int sx, int sy, int type){
    printf("%d %d %d\n",sx, sy, type);

    if(board[sx][sy]==last)
        return make_pair(1, 0);

    if(dp[sx][sy][type].first)
        return dp[sx][sy][type];

    pair<int, int>ansr(INT_MAX, INT_MAX), ansb(INT_MAX, INT_MAX), ansk(INT_MAX, INT_MAX), ans;

    for(int i=0; i<4; i++){
        for(int j=1; j<10; j++){
            int nxx = sx+dxr[i]*j;
            int nyy = sy+dyr[i]*j;

            if(valid(nxx, nyy))
                ansr = minimum(ansr, recur(nxx, nyy, 0));
        }
    }

    if(type!=0)
        ansr.second++;

    for(int i=0; i<4; i++){
        for(int j=1; j<10; j++){
            int nxx = sx+dxb[i]*j;
            int nyy = sy+dyb[i]*j;

            if(valid(nxx, nyy))
                ansb = minimum(ansb, recur(nxx, nyy, 1));
        }
    }

    if(type!=1)
        ansb.second++;

    for(int i=0; i<8; i++){
        int nxx = sx+dxk[i];
        int nyy = sy+dyk[i];

        if(valid(nxx, nyy))
            ansk = minimum(ansk, recur(nxx, nyy, 2));
    }

    if(type!=2)
        ansk.second++;

    ans = minimum(ansb, minimum(ansk, ansr));
    ans.first++;

    return ans;
}

int main(){
    FasterIO;

    while(cin>>n){
        memset(dp, 0, sizeof dp);

        int sx, sy;
        last = n*n;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>board[i][j];
                if(board[i][j]==1)
                    sx = i, sy = j;
            }
        }

        pair<int, int>ans(0, 0), fAns(0, 0), nxt;

        for(int i=1; i<=1; i++){
            nxt = nextOf(sx, sy);
            nx = nxt.first, ny = nxt.second;

            printf("%d %d %d %d\n",sx, sy, nx, ny);

            ans = recur(sx, sy, 0);

            sx = nxt.first, sx = nxt.second;

            fAns.first += ans.first;
            fAns.second += ans.second;
        }

        cout<<ans.first<<" "<<ans.second<<endl;
    }

    return 0;
}
