#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 55

char ds[4] = {'W', 'N', 'E', 'S'};
int dx[4] = { -1, 0, 1,  0};
int dy[4] = {  0, 1, 0, -1};

int find_dir_id(char ch){
    for(int i=0; i<4; i++)
        if(ds[i]==ch)
            return i;
    return -1;
}

bool valid(int x, int y, int n, int m){
    return (x>=0 && x<=n && y>=0 && y<=m);
}

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int x, y, dir;
        char ch;
        bool harabe[n+2][m+2];

        memset(harabe, false, sizeof harabe);

        while(cin>>x>>y>>ch){
            dir = find_dir_id(ch);
            bool lost = false;

            string s;
            cin>>s;

            for(int i=0; i<s.size(); i++){
                if(s[i]=='R')
                    dir = (dir+1)%4;
                else if(s[i]=='L')
                    dir = (((dir-1)%4)+4)%4;
                else{
                    int X = x+dx[dir];
                    int Y = y+dy[dir];
                    if(valid(X, Y, n, m)){
                        x=X, y=Y;
                    }
                    else if(!harabe[x][y]){
                        harabe[x][y] = lost = true;
                        break;
                    }
                }
            }

            cout<<x<<" "<<y<<" "<<ds[dir];
            if(lost)
                cout<<" LOST";
            cout<<"\n";
        }
    }

    return 0;
}
