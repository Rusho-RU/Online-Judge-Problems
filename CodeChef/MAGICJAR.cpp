#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long sum = 0;

        for(int i=0, val; i<n; i++){
            cin>>val;
            if(val!=1)
                sum+=1LL*val-1;
        }

        cout<<sum+1<<endl;
    }

    return 0;
}

