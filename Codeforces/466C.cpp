#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n+1], sum[n+1];

        sum[0] = 0;

        for(int i=1; i<n; i++){
            cin>>data[i];
            sum[i] = sum[i-1]+data[i];
        }

        int i = 0, j=n-1, sf = 0, sl = 0, cnt=0;

        while(i<j){
            if(sf<sl)
                i++;
            else if(sf>sl)
                j--;
            else{
                if(sum[j] - sum[i-1]==sf)
                    cnt++;
                i++, j--;
            }
        }
    }

    return 0;
}
