#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MOD 1000000007

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        long long a[n], b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];

        sort(a, a+n);
        sort(b, b+n);

        long long cnt = 0;

        for(int i=0; i<n; i++){
            cnt = (cnt+abs(a[i]-b[i])%MOD)%MOD;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
