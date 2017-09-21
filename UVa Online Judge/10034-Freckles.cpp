#include <bits/stdc++.h>
using namespace std;

struct point{
    int x,y;
};

struct type{
    int u,v;
    double value;
};

double calculate(double a1, double b1, double a2, double b2){
    return sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
}

bool comp(const type &a, const type &b){
    return a.value<b.value;
}

int parent[101];

int Find(int x){
    if(parent[x]==x) return x;
    else return parent[x]=Find(parent[x]);
}

bool Union(int x, int y){
    int u=Find(x),v=Find(y);
    if(u!=v){
        parent[u]=v;
        return true;
    }
    return false;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        vector<point>record;
        vector<type>v;
        int n,count=0;
        double x,y,value;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%lf %lf",&x,&y);
            int pos=record.size();

            for(int i=0;i<record.size();i++){
                double value=calculate(x,y,record[i].x,record[i].y);
                v.push_back({pos,i,value});
            }
            parent[pos]=pos;
            record.push_back({x,y});
        }

        sort(v.begin(),v.end(),comp);
        double sum=0;

        for(int i=0;i<v.size();i++){
            if(Union(v[i].u,v[i].v)){
                sum+=v[i].value;
            }
        }
        printf("%0.2lf\n",sum);
        if(t) printf("\n");
    }
    return 0;
}
