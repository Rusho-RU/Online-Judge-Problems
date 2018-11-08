#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define e 0.00000001

bool isSame(double n){
    return abs(n-9999.9) < e;
}

int main(){
    char ch;

    vector<pair<double, double> >ulp, lrp;

    while(scanf(" %c",&ch) && ch!='*'){
        double lx, ly, rx, ry;
        scanf("%lf %lf %lf %lf",&lx, &ly, &rx, &ry);

        ulp.push_back(make_pair(lx, ly));
        lrp.push_back(make_pair(rx, ry));
    }

    double x, y;
    int points = ulp.size(), p=0;

    while(scanf("%lf %lf",&x, &y) && !(isSame(x) && isSame(y))){
        ++p;
        bool found = false;
        for(int i=0; i<points; i++){
            if(x>ulp[i].x && x<lrp[i].x &&
               y<ulp[i].y && y>lrp[i].y)
                    printf("Point %d is contained in figure %d\n", p, i+1), found = true;
        }

        if(!found)
            printf("Point %d is not contained in any figure\n", p);
    }

    return 0;
}
