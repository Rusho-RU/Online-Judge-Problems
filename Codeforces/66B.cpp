#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n], l[n], r[n];

        l[0] = r[n-1] = 0;

        for(int i=0; i<n; i++)
            cin>>data[i];

        for(int i=1; i<n; i++)
            l[i] = data[i] >= data[i-1] ? l[i-1]+1 : 0;

        for(int i=n-2; i>=0; i--)
            r[i] = data[i] >= data[i+1] ? r[i+1]+1 : 0;

        int mx = INT_MIN;

        for(int i=0; i<n; i++)
            mx = max(mx, l[i]+r[i]+1);

        cout<<mx<<endl;
    }

    return 0;
}
