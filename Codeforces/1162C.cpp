#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;
const int MAX = 100010;

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int first[n+1], last[n+1], data[n+1];
        memset(last, -1, sizeof last);

        for(int i=1; i<=k; i++){
            cin>>data[i];
        }

        for(int i=1; i<=k; i++)
            last[data[i]] = i;

        for(int i=k; i>0; i--)
            first[data[i]] = i;

        int cnt=0;



        cout<<cnt<<endl;
    }

    return 0;
}

