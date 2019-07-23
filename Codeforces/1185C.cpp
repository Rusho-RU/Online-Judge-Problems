#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        priority_queue<int>pq;
        vector<int>v;

        int sum=0, cnt=0;

        for(int i=0; i<n; i++){
            sum+=data[i];
            int hold = sum;

            while(hold>m){
                v.push_back(pq.top());
                hold-=pq.top();
                pq.pop();
            }

            cout<<v.size()<<" ";

            for(auto val : v)
                pq.push(val);
            pq.push(data[i]);

            v.clear();
        }

        cout<<endl;
    }

    return 0;
}

