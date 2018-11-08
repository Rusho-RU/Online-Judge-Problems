#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        long long n,m,k,l;

        cin>>n>>m>>k>>l;

        long long time[n+1];

        for(int i=0; i<n; i++)
            cin>>time[i];

        time[n] = k;

        sort(time, time+n+1);

        long long wait = l*(m+1), mn = LONG_MAX;

        for(int i=0; i<=n; i++){
            mn = min(mn , abs(wait - time[i]));
            if(i<n)
                wait+=l;
        }

        cout<<mn<<endl;
    }

    return 0;
}

