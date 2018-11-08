#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int data[n], cnt=0;

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n, greater<int>());

        for(int i=k; i<n; i++)
            data[i]==data[k-1] ? cnt++ : i=n;

        cout<<k+cnt<<endl;
    }

    return 0;
}
