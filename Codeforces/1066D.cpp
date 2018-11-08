#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    int n, m, k;

    while(cin>>n>>m>>k){
        long long sum, data[n];
        int boxes = 0;

        for(int i=0; i<n; i++){
            cin>>data[i];
        }

        int i;
        sum = data[n-1];

        for(i=n-2; i>=0; i--){
            if(sum+data[i]<=k){
                sum+=data[i];
            }

            else{
                boxes++;
                if(boxes < m)
                    sum = data[i];
                else
                    break;
            }
        }

        cout<<n-i-1<<endl;
    }

    return 0;
}
