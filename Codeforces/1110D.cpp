#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        vector<int>v;
        int data[n];

        for(int i=0; i<n; i++){
            cin>>data[i];
        }

        sort(data, data+n);

        int cnt = 1;

        for(int i=1; i<n; i++){
            if(data[i]==data[i-1])
                cnt++;
            else{
                v.push_back(cnt);
                cnt=1;
            }
        }

        v.push_back(cnt);

        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

