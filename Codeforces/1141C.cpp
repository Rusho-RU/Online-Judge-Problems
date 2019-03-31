#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;
    cin>>n;
    int data[n];

    for(int i=0; i<n; i++)
        cin>>data[i];

    int cnt[n+1];
    int lo = 1, hi = n, mid, hold[n];
    int flag;

    while(lo<=hi){
        mid=(lo+hi)>>1;

        memset(cnt, 0, sizeof(cnt));

        cnt[mid]++;

        hold[0]=mid;

        flag=1;

        for(int i=1; i<=n; i++){
            hold[i] = hold[i-1] + data[i-1];

            if(hold[i]<1){
                lo = mid+1;
                break;
            }
            else if(hold[i]>n){
                hi = mid-1;
                break;
            }
            else if(cnt[hold[i]]){
                cout<<"-1"<<endl;
                return 0;
            }

            else{
                cnt[hold[i]]++;
                flag++;
            }
        }

        if(n==flag) {
            for(int i=0; i<n; i++)
                cout<<hold[i]<<" ";

            cout<<endl;

            return 0;
        }
    }
    cout<<"-1"<<endl;

return 0;
}

