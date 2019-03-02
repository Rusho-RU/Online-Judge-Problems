#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n && n){
        long long data[n+1], width[n+1];

        for(int i=0; i<n; i++)
            cin>>data[i];

        data[n] = 0;

        stack<long long>stck;

        long long ans = 0;

        for(int i=0; i<=n; i++){
            width[i] = 0;
            while(!stck.empty() && data[stck.top()] > data[i]){
                width[i]+=width[stck.top()];
                ans = max(ans, data[stck.top()]*width[i]);
                stck.pop();
            }
            width[i]++;
            stck.push(i);
        }

        cout<<ans<<endl;
    }

    return 0;
}

