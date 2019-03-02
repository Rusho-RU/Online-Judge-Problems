#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        sort(data, data+n);

        int now = 0, cnt=1;

        for(int i=1; i<n; i++){
            if(data[i]==data[i-1])
                cnt++;
            else{
                if(now<data[i-1])
                    break;
                now+=cnt;
                cnt=1;
            }
        }

        if(now>=data[n-1])
            now+=cnt;

        cout<<now<<endl;
    }

    return 0;
}

