#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    //freopen("input.txt", "r", stdin);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        int knows=1, days=0, cap=data[0];

        while(knows < n){
            long long sum = 0;

            for(int i=0; i<cap && knows+i < n; i++){
                sum+=(long long)data[knows+i];
            }

            knows += cap;
            cap += min((long long)n, sum);
            days++;
        }

        cout<<days<<endl;
    }

    return 0;
}


