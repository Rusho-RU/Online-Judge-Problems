#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        long long data[n];
        long long total = 0;

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n);

        int level = 0;

        for(int i=0; i<n-1; i++){
            total+=data[i]-1;
            if(data[i] > level)
                level++;
        }

        total += data[n-1] - max(1LL, data[n-1] - level);

        cout<<total<<endl;
    }

    return 0;
}

