#include <bits/stdc++.h>
using namespace std;

#define counter_clock_wise 1
#define colinear 0
#define clock_wise -1

struct point{
    int x, y;
    point(int a, int b):x(a), y(b){}
    point(){}
};

vector<point>v;
stack<point>hullPoint;

point nextToTop(){
    point hold = hullPoint.top();
    hullPoint.pop();
    point ret = hullPoint.top();
    hullPoint.push(hold);
    return ret;
}

int dist(const point& a, const point& b){
    int x = a.x-b.x, y=a.y-b.y;
    return x*x + y*y;
}

int triangle(const point& a, const point& b, const point& c){
    int val = a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y);
    if(val>0)
        return counter_clock_wise;
    if(val<0)
        return clock_wise;
    return colinear;
}

bool cmp(const point& a, const point& b){
    int orientation = triangle(v[0], a, b);

    if(orientation == colinear)
        return dist(v[0], a) < dist(v[0], b);
    return orientation == counter_clock_wise;
}

int findGrahamPoint(){
    int grahamPoint = 0;

    for(int i=1; i<v.size(); i++)
        if(v[i].y < v[grahamPoint].y || (v[i].y == v[grahamPoint].y && v[i].x < v[grahamPoint].x))
            grahamPoint = i;
    return grahamPoint;
}

void reorder(){
    vector<point>::iterator it = v.begin();
    sort(++it, v.end(), cmp);
    return;
}

void convexHull(){
    if(v.size()<3)
        return;

    int grahamPoint = findGrahamPoint();
    swap(v[0], v[grahamPoint]);
    reorder();

    hullPoint.push(v[0]);
    if(triangle(v[0], v[1], v[2]) == counter_clock_wise)
        hullPoint.push(v[1]);
    hullPoint.push(v[2]);

    for(int i=3; i<v.size(); i++){
        while(hullPoint.size()>=2 && triangle(nextToTop(), hullPoint.top(), v[i]) != counter_clock_wise)
            hullPoint.pop();
        hullPoint.push(v[i]);

    }

    v.clear();

    while(!hullPoint.empty()){
        v.push_back(hullPoint.top());
        hullPoint.pop();
    }

    return;
}

int main(){
    int c;

    while(scanf("%d",&c)==1){
        int x, y;

        while(c--){
            scanf("%d %d",&x,&y);
            v.push_back(point(x,y));
        }

        convexHull();
        int ans = 0;

        for(int i=0; i<v.size(); i++)
            for(int j=i+1; j<v.size(); j++)
                ans = max(ans, dist(v[i], v[j]));

        double a = sqrt(ans);
        printf("%lf\n",a);
        v.clear();
    }

    return 0;
}
