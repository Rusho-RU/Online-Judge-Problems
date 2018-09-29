#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x,y,h;
    Point(int _x, int _y, int _h):x(_x), y(_y), h(_h){}
    Point(){}
};

int cross(const Point& p1, const Point& p2, const Point& p3){
    return (p2.y - p1.y) * (p3.x - p2.x) - (p2.x - p1.x) * (p3.y - p2.y);
}

int orientation(const Point& p1, const Point& p2, const Point& p3){
    int cross_product = cross(p1, p2, p3);

    if(cross_product == 0)
        return 0;

    if(cross_product<0)
        return -1;
    return 1;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        vector<Point>v;

        for(int i=0; i<n; i++){
            int x,y,h;
            scanf("%d%d%d",&x,&y,&h);
            v.push_back(Point(x, y, h));
        }

        bool found = false;

        for(int i=0; i<n && !found; i++){
            int left = 0, right = 0, colinear = v[i].h;
            Point helper(v[i].x+1, v[i].y+1, 0);

            for(int j=0; j<n && !found; j++){
                if(j==i) continue;
                int o = orientation(v[i], helper, v[j]);
                if(o==0)
                    colinear+=v[j].h;
                if(o==1)
                    left+=v[j].h;
                else
                    right+=v[j].h;
            }

            if(right==left || right==left+colinear || left==right+colinear)
                found=true;
        }

        if(found)
            puts("YES");
        else
            puts("NO");
    }
}
