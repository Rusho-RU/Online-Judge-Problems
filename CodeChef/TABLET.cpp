#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, b;
        cin>>n>>b;

        pair<int, int>data[n];

        for(int i=0; i<n; i++){
            int w, h, p;
            cin>>w>>h>>p;
            data[i].first = w*h;
            data[i].second = p;
        }

        int area = INT_MIN;

        for(int i=0; i<n; i++){
            if(data[i].second<=b){
                area = max(area, data[i].first);
            }
        }

        area = max(area, 0);

        if(area)
            cout<<area<<endl;
        else
            cout<<"no tablet\n";
    }

    return 0;
}
