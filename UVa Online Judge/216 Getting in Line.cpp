#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

double dist(pair<int, int> a, pair<int, int> b){
    double x = 1.0*a.first-b.first;
    double y = 1.0*a.second-b.second;

    return sqrt(x*x+y*y)+16;
}

int main(){
    FasterIO;

    int n, Case=0;

    while(cin>>n && n){
        pair<int, int>coordinate[n];
        int id[n];

        for(int i=0; i<n; i++){
            cin>>coordinate[i].first>>coordinate[i].second;
            id[i] = i;
        }

        double mn = DBL_MAX;
        int ans[n];

        do{
            double total = 0;
            for(int i=1; i<n; i++){
                total+=dist(coordinate[id[i]], coordinate[id[i-1]]);
            }

            if(total<mn){
                for(int i=0; i<n; i++)
                    ans[i] = id[i];
                mn = total;
            }

        }while(next_permutation(id, id+n));

        cout<<"**********************************************************"<<endl;
        cout<<"Network #"<<++Case<<endl;

        for(int i=1; i<n; i++){
            int x1 = coordinate[ans[i]].first;
            int y1 = coordinate[ans[i]].second;
            int x2 = coordinate[ans[i-1]].first;
            int y2 = coordinate[ans[i-1]].second;

            cout<<"Cable requirement to connect ("<<x2<<","<<y2<<") to ("<<x1<<","<<y1<<") is "<<fixed<<
                setprecision(2)<<dist({x1, y1}, {x2, y2})<<" feet."<<endl;
        }

        cout<<"Number of feet of cable required is "<<mn<<".\n";
    }

    return 0;
}
