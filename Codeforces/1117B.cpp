#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    long long n, m, k;

    while(cin>>n>>m>>k){
        long long data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n, greater<long long>());


        long long div = m/(k+1), rem = m%(k+1);
        long long ans = data[0]*div*k + data[1]*div + data[0]*rem;

        cout<<ans<<endl;
    }

    return 0;
}
