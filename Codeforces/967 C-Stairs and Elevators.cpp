#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MAX 10000000

int manhattan_dist(int x1, int y1, int x2, int y2){
    return abs(x1-x2) + abs(y1-y2);
}

int stair[MAX];
int elev[MAX];

int main(){
    int n,m,s, e, velocity;

    while(scanf("%d %d %d %d %d",&n, &m, &s, &e, &velocity)==5){
        for(int i=0; i<s; i++) scanf("%d",&stair[i]);
        for(int i=0; i<e; i++) scanf("%d",&elev[i]);

        sort(elev, elev+e);
        sort(stair, stair+s);

        int q;
        scanf("%d",&q);

        while(q--){
            int x1, y1, x2, y2;
            scanf("%d %d %d %d",&x1, &y1, &x2, &y2);

            if(x1==x2){
                printf("%d\n",abs(y1-y2));
                continue;
            }

            int height = abs(x1-x2);
            int required = height/velocity;
            if(height%velocity) required++;

            int stair_left, stair_right, elev_left, elev_right;
            int stairL = INF, stairR = INF, elevL = INF, elevR = INF;
            int forStair = INF, forElev = INF;

            if(s){
                stair_left = lower_bound(stair, stair+s, y1+1) - stair;
                stair_right = upper_bound(stair, stair+s, y1-1) - stair;

                if(stair_left!=0) stairL = abs(y1-stair[stair_left-1]) + abs(y2-stair[stair_left-1]) + height;
                if(stair_right!=s) stairR = abs(y1-stair[stair_right]) + abs(y2-stair[stair_right]) + height;

                forStair = min(stairL, stairR);
            }

            if(e){
                elev_left = lower_bound(elev, elev+e, y1+1) - elev;
                elev_right = upper_bound(elev, elev+e, y1-1) - elev;

                if(elev_left!=0) elevL = abs(y1-elev[elev_left-1]) + abs(y2-elev[elev_left-1]) + required;
                if(elev_right!=s) elevR = abs(y1-elev[elev_right]) + abs(y2-elev[elev_right]) + required;

                forElev = min(elevL, elevR);
            }

            int ans = min(forElev, forStair);
            printf("%d\n",ans);
        }
    }

    return 0;
}
