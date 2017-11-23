#include <bits/stdc++.h>
using namespace std;

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

int ccw(const point& a, const point& b, const point& c){
    int val = a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y);
    if(val>0)
        return 1;
    if(val<0)
        return -1;
    return val;
}

bool cmp(const point& a, const point& b){
    int val = ccw(v[0], a, b);

    if(val == 0)
        return dist(v[0], a) < dist(v[0], b);
    return val==1;
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
    reorder();

    hullPoint.push(v[0]);
    hullPoint.push(v[1]);
    hullPoint.push(v[2]);

    for(int i=3; i<v.size(); i++){
        while(ccw(nextToTop(), hullPoint.top(), v[i])==-1)
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

        int grahamPoint = findGrahamPoint();
        swap(v[0], v[grahamPoint]);
        convexHull();

        for(int i=0; i<v.size(); i++)
            printf("%d %d\n",v[i].x, v[i].y);

        v.clear();
    }

    return 0;
}
