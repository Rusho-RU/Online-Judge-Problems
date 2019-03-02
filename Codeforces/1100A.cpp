#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int k, n;

    while(cin>>n>>k){
        int data[n+1];
        data[0] = 0;

        for(int i=1; i<=n; i++){
            cin>>data[i];
        }

        int mx = INT_MIN;

        for(int i=1; i<=n; i++){
            int is[n+1];
            fill_n(is, n+1, 1);

            for(int j = -i/k; j<=1+(n-i)/k; j++){
                int h = i+j*k;

                if(h>=1 && h<=n){
                    is[h] = 0;
                }
            }

            int sum = 0;
            for(int j=1; j<=n; j++)
                sum+=is[j]*data[j];

            mx = max(mx, abs(sum));
        }

        cout<<mx<<endl;
    }

    return 0;
}
