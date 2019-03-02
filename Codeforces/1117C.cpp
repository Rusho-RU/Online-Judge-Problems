#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

string dir = "UDLR";
int dx[] = {0,  0, -1, 1};
int dy[] = {1, -1,  0, 0};

int main(){
    FasterIO;

    int x1, x2, y1, y2;

    while(cin>>x1>>y1>>x2>>y2){
        int n;
        string s;

        cin>>n>>s;

        pair<long long, long long>pos[n+1];

        pos[0] = {0, 0};

        for(int i=0; i<n; i++){
            int id = dir.find(s[i]);
            pos[i+1] = {pos[i].first+dx[id], pos[i].second+dy[id]};
        }

        long long l=0, r=2e14;

        while(l<r){
            long long mid = (l+r)/2;
            long long cycle = mid/n, rem = mid%n;
            long long x3 = x1+pos[rem].first + cycle*pos[n].first;
            long long y3 = y1+pos[rem].second + cycle*pos[n].second;

            if((abs(x3-x2) + abs(y3-y2))<=mid)
                r = mid;
            else
                l = mid+1;
        }

        cout<<(r==2e14 ? -1 : r)<<endl;
    }

    return 0;
}
