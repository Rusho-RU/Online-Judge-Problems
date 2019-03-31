#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        pair<long long, long long>data[n];

        for(int i=0; i<n; i++)
            cin>>data[i].second>>data[i].first;

        sort(data, data+n, greater<>());

        priority_queue<long long, vector<long long>, greater<long long> >pq;

        long long sum=0, ans=0;

        for(int i=0; i<n; i++){
            pq.push(data[i].second);
            sum+=data[i].second;

            if(pq.size()>k){
                sum -= pq.top();
                pq.pop();
            }

            ans = max(ans, sum*data[i].first);
        }

        cout<<ans<<endl;
    }

    return 0;
}

