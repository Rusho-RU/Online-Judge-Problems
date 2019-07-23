#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

#define pii pair<int,int>

struct Line{
    int x1, y1, x2, y2;
};

bool intersect(pii p1, pii p2, pii p3, pii p4){
    return ((p1.second-p2.second)*(p3.first-p4.first)!=(p1.first-p2.first)*(p3.second-p4.second));
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        vector<pair<int, int> >v(n);

        for(int i=0; i<n; i++){
            cin>>v[i].first>>v[i].second;
        }

        vector<Line>vv;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                vv.push_back({v[i].first, v[i].second, v[j].first, v[j].second});
            }
        }

        int cnt=0;

        for(int i=0; i<vv.size(); i++){
            for(int j=i+1; j<vv.size(); j++){
                if(intersect({vv[i].x1, vv[i].y1}, {vv[i].x2, vv[i].y2}, {vv[j].x1, vv[j].y1}, {vv[j].x2, vv[j].y2})){
                    cnt++;
                    cout<<vv[i].x1<<" "<<vv[i].y1<<" "<<vv[i].x2<<" "<<vv[i].y2<<" "<<vv[j].x1<<" "<<vv[j].y1<<" "<<vv[j].x2<<" "<<vv[j].y2<<endl;
                }
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}

