#include <bits/stdc++.h>
using namespace std;

struct Point{
    double x, y;
    Point(double _x, double _y):x(_x), y(_y){}
    Point(){}
};

double cross(const Point& a, const Point& b, const Point& c){
    return (b.x - a.x)*(c.y - b.y) - (c.x - b.x)*(b.y - a.y);
}

Point coordinate_of_intersection(const Point& p1, const Point& p2, const Point& p3, const Point& p4){
    double a1 = p2.y - p1.y;
    double b1 = p1.x - p2.x;
    double c1 = a1*p1.x + b1*p1.y;

    double a2 = p4.y - p3.y;
    double b2 = p3.x - p4.x;
    double c2 = a2*p3.x + b2*p3.y;

    double determinant = a1*b2 - a2*b1;

    if(determinant==0)
        return Point();

    double x = (c1*b2 - c2*b1)/determinant;
    double y = (c2*a1 - c1*a2)/determinant;

    return Point(x, y);
}

void clip(const Point& p1, const Point& p2, vector<Point>& polygon){
    int n = polygon.size();
    Point p3, p4;
    vector<Point>clipped;

    for(int a=0; a<n; a++){
        int b = (a+1)%n;
        p3 = polygon[a];
        p4 = polygon[b];

        double pos_of_point_a = cross(p1, p2, p3);
        double pos_of_point_b = cross(p1, p2, p4);

        if(pos_of_point_a<=0 && pos_of_point_b<=0)
            clipped.push_back(p4);

        else if(pos_of_point_a>0 && pos_of_point_b<=0){
            Point crossed = coordinate_of_intersection(p1, p2, p3, p4);
            clipped.push_back(crossed);
            clipped.push_back(p4);
        }

        else if(pos_of_point_a<=0 && pos_of_point_b>0){
            Point crossed = coordinate_of_intersection(p1, p2, p3, p4);
            clipped.push_back(crossed);
        }
    }

    polygon = clipped;

    return;
}

void SutherlandHodgman(const vector<Point>& polygon1, vector<Point>& polygon2){
    int n = polygon1.size();

    for(int a=0; a<n; a++){
        int b = (a+1)%n;
        clip(polygon1[a], polygon1[b], polygon2);
    }

    return;
}

void scan(vector<Point>& v, int n){
    v.clear();

    for(int i=0; i<n; i++){
        double x, y;
        scanf("%lf %lf",&x, &y);
        v.push_back(Point(x, y));
    }

    return;
}

double areaOf(vector<Point>& v){
    int n = v.size();
    double area = 0;

    for(int i=0; i<n; i++){
        int j = (i+1)%n;
        area+=v[i].x * v[j].y - v[i].y * v[j].x;
    }

    return abs(area/2);
}

int main(){
    int n1, n2;
    vector<Point>polygon1, polygon2;

    while(scanf("%d",&n1) && n1){
        scan(polygon1, n1);
        double area1 = areaOf(polygon1);

        scanf("%d",&n2);
        scan(polygon2, n2);
        double area2 = areaOf(polygon2);

        SutherlandHodgman(polygon1, polygon2);

        double ans = area1 + area2;

        if(!polygon2.empty())
            ans -= 2*areaOf(polygon2);

        printf("%8.2lf",ans);
    }

    puts("");

    return 0;
}
