#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m, k;

    while(cin>>n>>m>>k){
        int data[n], diff[n];

        diff[0] = INT_MAX;

        for(int i=0; i<n; i++){
            cin>>data[i];
            if(i)
                diff[i] = data[i]-data[i-1];
        }

        int tape = data[n-1] - data[0] + 1;

        sort(diff, diff+n, greater<int>());

        for(int i=1, j=1; i<n && j<k; i++, j++){
            tape-=diff[i]-1;
        }

        cout<<tape<<endl;
    }

    return 0;
}
