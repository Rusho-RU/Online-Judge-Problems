#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];

        for(int i=0; i<n; i++){
            cin>>data[i];
        }

        int cnt = 1, mx = 0;

        for(int i=1; i<n; i++){
            if(data[i]==data[i-1])
                cnt++;
            else{
                if(data[i-1]==1)
                    mx = max(mx, cnt);
                cnt = 1;
            }
        }

        if(data[n-1])
            mx = max(mx, cnt);

        cnt = 0;

        for(int i=0; i<n && data[i]; i++)
            cnt++;

        for(int i=n-1; i>=0 && data[i]; i--)
            cnt++;

        cout<<max(mx, cnt)<<endl;
    }

    return 0;
}

