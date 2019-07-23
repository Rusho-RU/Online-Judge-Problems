#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    long long n, m, k;

    while(cin>>n>>m>>k){
        long long prev, cnt = 0, ans = 0, x;

        for(int i=0; i<m; i++){
            cin>>x;

            x-=cnt;

            long long page = x/k - (x%k==0);

            if(i==0)
                prev = page;

            if(page!=prev){
                ans++, cnt=i, prev = page;

                prev-=cnt/k;

                cnt%=k;

                if(x%k<=cnt)
                    prev--;
            }
        }

        cout<<ans+1<<endl;
    }

    return 0;
}

