#include <bits/stdc++.h>
using namespace std;

struct vec{
    double x,y;
    vec(double x=0, double y=0):x(x),y(y){}
};

vec operator + (const vec& a, const vec& b) {return {a.x+b.x,a.y+b.y};}
vec operator - (const vec& a, const vec& b) {return {a.x-b.x,a.y-b.y};}
double operator ^ (const vec& a, const vec& b) {return a.x*b.y-a.y*b.x;}
double operator * (const vec& a, const vec& b){return a.x*b.x+a.y*b.y;}

int calculate(vec a, vec b, vec c, vec d){
    int ans=6;
    vec ab=b-a, bc=c-b, cd=d-c, da=a-d;
    if((ab^cd)==0 || (bc^da)==0)
        ans=5;
    if((ab^cd)==0 && (bc^da)==0){
        ans=4;
        if((c-a)*(d-b)==0) ans=3;
        if(ab*bc==0) ans=2;
        if(ab*bc==0 && (c-a)*(d-b)==0) ans=1;
    }
    return ans;
}

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        vec d[4];
        for(int i=0;i<4;i++)
            scanf("%lf %lf",&d[i].x, &d[i].y);
        int ans=7;
        ans=min(ans,calculate(d[0],d[1],d[2],d[3]));
        ans=min(ans,calculate(d[0],d[2],d[1],d[3]));
        ans=min(ans,calculate(d[0],d[1],d[3],d[2]));
        printf("Case %d: ",++Case);
        switch(ans){
            case 1: puts("Square"); break;
            case 2: puts("Rectangle"); break;
            case 3: puts("Rhombus"); break;
            case 4: puts("Parallelogram"); break;
            case 5: puts("Trapezium"); break;
            case 6: puts("Ordinary Quadrilateral"); break;
        }
    }
    return 0;
}
