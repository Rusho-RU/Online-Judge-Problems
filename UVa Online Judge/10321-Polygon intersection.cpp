#include <bits/stdc++.h>
using namespace std;

#define eps 0.00001
#define INF 150

struct Point{
    double x, y;
    Point(double _x, double _y):x(_x), y(_y){}
    Point(){}
};

bool same(double a, double b){
    return abs(a-b)<eps;
}

double cross(Point p1, Point p2, Point p3){
    return ((p1.x-p2.x)*(p2.y-p3.y) - (p1.y-p2.y)*(p2.x-p3.x));
}

int orientation(Point p1, Point p2, Point p3){
    double cross_product = cross(p1, p2, p3);

    if(same(cross_product, 0))
        return 0;

    if(cross_product<0)
        return -1;
    return 1;
}

bool onSegment(Point p1, Point p2, Point p3){
    return (p3.x>=min(p1.x, p2.x) && p3.x<=max(p1.x, p2.x) &&
            p3.y>=min(p1.y, p2.y) && p3.y<=max(p1.y, p2.y));
}

bool lineIntersected(Point p1, Point p2, Point p3, Point p4){
    int o1 = orientation(p1, p2, p3);
    int o2 = orientation(p1, p2, p4);
    int o3 = orientation(p3, p4, p1);
    int o4 = orientation(p3, p4, p2);

    if(o1!=o2 && o3!=o4)
        return true;

    if(o1==0 && onSegment(p1, p2, p3)) return true;
    if(o2==0 && onSegment(p1, p2, p4)) return true;
    if(o3==0 && onSegment(p3, p4, p1)) return true;
    if(o4==0 && onSegment(p3, p4, p2)) return true;

    return false;
}

bool pointInPolygon(vector<Point>& polygon, Point p){
    Point ray(INF, p.y);
    int cnt = 0, n = polygon.size();

    for(int i=0; i<n; i++){
        int j = (i+1)%n;
        if(lineIntersected(polygon[i], polygon[j], p, ray)){
            if(orientation(polygon[i], polygon[j], p) == 0){
                if(onSegment(polygon[i], polygon[j], p)){
                    return true;
                }
            }

            cnt++;
        }
    }

    return cnt&1;
}

Point coordinate_of_intersected_point(Point p1, Point p2, Point p3, Point p4){
    double a1 = p2.y - p1.y;
    double b1 = p1.x - p2.x;
    double c1 = a1*p1.x + b1*p1.y;

    double a2 = p4.y - p3.y;
    double b2 = p3.x - p4.x;
    double c2 = a2*p3.x + b2*p3.y;

    double determinant = a1*b2 - a2*b1;

    if(same(determinant, 0))
        return Point(INF, INF);

    double x = (b2*c1 - b1*c2)/determinant;
    double y = (a1*c2 - a2*c1)/determinant;

    return Point(x, y);
}

void scan(vector<Point>& v, int n){
    v.clear();

    for(int i=0; i<n; i++){
        double x,y;
        scanf("%lf %lf",&x,&y);
        v.push_back(Point(x,y));
    }

    reverse(v.begin(), v.end());

    return;
}

bool cmp(const Point& a, const Point& b){
    if(same(a.x, b.x))
        return a.y<b.y;
    return a.x<b.x;
}

bool samePoint(Point p1, Point p2){
    return (same(p1.x, p2.x) && same(p1.y, p2.y));
}

void remove_same_point(vector<Point>& points, vector<Point>& ans){
    ans.push_back(points[0]);
    for(int i=1; i<points.size(); i++){
        if(!samePoint(points[i], points[i-1]))
            ans.push_back(points[i]);
    }

    return;
}

int main(){
    int n1;
    vector<Point>polygon1, polygon2, points, ans;

    //freopen("myfile.txt", "w", stdout);

    while(scanf("%d",&n1) && n1>2){
        points.clear();
        ans.clear();
        scan(polygon1, n1);

        int n2;
        scanf("%d",&n2);
        scan(polygon2, n2);

        for(int i=0; i<n2; i++){
            if(pointInPolygon(polygon1, polygon2[i]))
                points.push_back(polygon2[i]);
        }

        for(int i=0; i<n1; i++){
            if(pointInPolygon(polygon2, polygon1[i]))
                points.push_back(polygon1[i]);
        }

        for(int i=0; i<n1; i++){
            int j = (i+1)%n1;
            for(int k=0; k<n2; k++){
                int l = (k+1)%n2;
                if(lineIntersected(polygon1[i], polygon1[j], polygon2[k], polygon2[l])){
                    points.push_back(coordinate_of_intersected_point(polygon1[i], polygon1[j], polygon2[k], polygon2[l]));
                }
            }
        }

        if(points.empty()){
            puts("0");
            continue;
        }

        sort(points.begin(), points.end(), cmp);
        remove_same_point(points, ans);

        for(int i=0; i<ans.size(); i++)
            printf("%.2lf %.2lf\n",ans[i].x, ans[i].y);

    }

    return 0;
}
