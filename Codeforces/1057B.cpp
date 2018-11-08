#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    int n;

    while(cin>>n){
        int data[n];
        int sum = 0, mx = INT_MIN;

        for(int i=0; i<n; i++){
            cin>>data[i];
        }

        for(int i=0; i<n; i++){
            sum=0;
            for(int j=i; j<n; j++){
                sum+=data[j];
                if(sum > (j-i+1)*100)
                    mx = max(mx, j-i+1);
            }
        }

        mx = max(mx, 0);

        cout<<mx<<endl;
    }

    return 0;
}
