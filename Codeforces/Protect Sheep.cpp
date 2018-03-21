#include <bits/stdc++.h>
using namespace std;

string s[600];

int dx[] = {1,-1,0,0};
int dy[] = {0, 0,1,-1};

bool valid(int x, int y, int n, int m){
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}

int main(){
    int n,m;
    while(cin>>n>>m){
        for(int i=0; i<n; i++)
            cin>>s[i];

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(s[i][j]=='.')
                    s[i][j]='D';
            }
        }

        bool possible = false;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(s[i][j]=='W')
                    for(int k=0; k<4; k++){
                        int x = i+dx[k];
                        int y = j+dy[k];

                        if(valid(x,y,n,m) && s[x][y]=='S'){
                            possible=  true;
                        }
                    }
            }
        }

        if(!possible){
            puts("Yes");
            for(int i=0; i<n; i++){
                cout<<s[i]<<endl;
            }
        }
        else
            puts("No");
    }

    return 0;
}
