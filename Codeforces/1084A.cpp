#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n+1], sum = 0, mn = INT_MAX;

        for(int i=1; i<=n; i++){
            cin>>data[i];
        }

        for(int i=1; i<=n; i++){
            sum=0;
            for(int j=1; j<=n; j++){
                sum+=data[j]*(abs(i-j)+i+j-2)*2;
            }
            mn = min(mn, sum);
        }

        cout<<mn<<endl;
    }

    return 0;
}

