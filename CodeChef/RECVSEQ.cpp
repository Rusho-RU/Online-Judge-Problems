#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int data[n];

        for(int i=0; i<n; i++){
            cin>>data[i];
        }

        int val1 = data[1] - data[0];
        int val2 = data[n-1] - data[n-2];

        int cnt1=0, cnt2=0;

        for(int i=1; i<n; i++){
            int val = data[i]-data[i-1];
            if(val==val1)
                cnt1++;
            else if(val==val2)
                cnt2++;
        }

        int diff;

        if(cnt1>cnt2)
            diff=val1;
        else if(cnt2>cnt1)
            diff = val2;
        else{
            int d = (data[3]-data[0])/(n-1);
            data[1] = data[0]+d;
            data[2] = data[3]-d;
            diff=d;
        }

        for(int i=1; i<n-1; i++){
            if(data[i]-data[i-1]!=diff && data[i+1]-data[i]!=diff){
                data[i] = data[i-1]+diff;
                break;
            }
        }

        if(data[1]-data[0]!=diff)
            data[0] = data[1]-diff;
        else if(data[n-1]-data[n-2]!=diff)
            data[n-1] = data[n-2]+diff;


        for(int i=0; i<n; i++){
            cout<<data[i];
            if(i==n-1)
                cout<<endl;
            else
                cout<<" ";
        }
    }

    return 0;
}
