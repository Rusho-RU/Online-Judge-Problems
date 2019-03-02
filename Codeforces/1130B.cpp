#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        pair<int, int>data[2*n];

        for(int i=0; i<2*n; i++){
            cin>>data[i].first;
            data[i].second = i;
        }

        sort(data, data+2*n);

        long long total = 1LL*data[0].second+data[1].second;

        for(int i=2; i<2*n; i+=2){
            total+=1LL*min(abs(data[i-2].second-data[i].second)+abs(data[i-1].second-data[i+1].second),
                       abs(data[i-2].second-data[i+1].second)+abs(data[i-1].second-data[i].second));
        }

        cout<<total<<endl;
    }

    return 0;
}
