#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

double dist(int x1, int y1, int x2, int y2){
    int x = x1-x2;
    int y = y1-y2;

    return sqrt(x*x + y*y);
}

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int x[n], y[n];

        for(int i=0; i<n; i++)
            cin>>x[i]>>y[i];

        double sum = 0;

        for(int i=1; i<n; i++)
            sum += dist(x[i], y[i], x[i-1], y[i-1]);

        sum*=k;

        double time = sum/50;

        cout<<setprecision(8)<<time<<endl;
    }

    return 0;
}
