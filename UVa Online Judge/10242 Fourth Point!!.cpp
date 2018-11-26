#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int main(){
    pair<double, double>point[4];

    while(scanf("%lf %lf",&point[0].x, &point[0].y)==2){
        double ax=point[0].x, ay=point[0].y;

        for(int i=1; i<4; i++){
            scanf("%lf %lf",&point[i].x, &point[i].y);
            ax+=point[i].x;
            ay+=point[i].y;
        }

        bool found = false;

        for(int i=0; i<4 && !found; i++){
            for(int j=i+1; j<4 && !found; j++){
                if(point[i].x==point[j].x &&
                   point[i].y==point[j].y)
                    ax-=3*point[i].x, ay-=3*point[i].y, found = true;
            }
        }

        printf("%0.3lf %0.3lf\n",ax, ay);
    }

    return 0;
}
