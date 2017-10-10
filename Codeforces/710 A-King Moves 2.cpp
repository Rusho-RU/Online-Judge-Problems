#include <bits/stdc++.h>
using namespace std;

int dx[]={1,1,1,-1,-1,-1,0,0}, dy[]={1,-1,0,1,-1,0,1,-1};

int decide(char c){
    return c-'a'+1;
}

bool valid(int x, int y){
    if(x>=1 && x<=8 && y>=1 && y<=8)
        return true;
    return false;
}

int main(){
    char c;
    int x;

    while(scanf(" %c %d",&c,&x)==2){
        int y = decide(c);
        int cnt=0;

        for(int i=0; i<8; i++){
            int sx = x+dx[i], sy = y+dy[i];
            if(valid(sx,sy))
                cnt++;
        }

        printf("%d\n",cnt);
    }
}
