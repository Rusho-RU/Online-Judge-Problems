#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1, x1, y1, r2, x2, y2;

    while(scanf("%d%d%d%d%d%d",&r1,&x1,&y1,&r2,&x2,&y2)==6){
        int r = r1+r2;
        int x = x1-x2;
        int y = y1-y2;

        if(x*x + y*y >= r*r){
            puts("RICO");
        }

        else
            puts("")
    }
}
