#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    long long n, s;

    while(cin>>n>>s){
        long long data[n];

        long long mn = LONG_MAX, total = 0;

        for(int i=0; i<n; i++){
            cin>>data[i];
            mn = min(mn, data[i]);
            total+=data[i];
        }

        if(total < s){
            cout<<-1<<endl;
            continue;
        }

        total = 0;

        for(int i=0; i<n; i++){
            total += data[i] - mn;
        }

        if(total>=s){
            cout<<mn<<endl;
            continue;
        }

        long long lage = s - total;

        long long ans = lage/n;
        if(lage%n)
            ans++;
        cout<<mn-ans<<endl;
    }

    return 0;
}

