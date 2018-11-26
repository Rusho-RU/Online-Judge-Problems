#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define setbitcount __builtin_popcount

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n+2];

        for(int i=0; i<n; i++)
            cin>>data[i];

        int cnt=1, ans=-1;

        for(int i=1; i<n; i++){
            if(data[i]==data[i-1]+1)
                cnt++;

            else{
                ans = max(ans, cnt);
                cnt=1;
            }
        }

        ans = max(ans, cnt);

        if(ans==n){
            if(data[0]==1 || data[n-1]==1000)
                cout<<n-1<<endl;
            else
                cout<<max(ans-2, 0)<<endl;
        }

        else
            cout<<max(ans-2, 0)<<endl;
    }

    return 0;
}

