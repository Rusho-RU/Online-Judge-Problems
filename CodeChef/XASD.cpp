#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

struct Node{
    int val, level;
};

int data[3] = {2, 3, 5};

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        set<int>visit;

        queue<Node>q;
        q.push({1, 0});

        int ans;

        while(!q.empty()){
            int val = q.front().val;
            int level = q.front().level;

            q.pop();

            if(val==n){
                ans = level;
                break;
            }

            visit.insert(val);

            for(int i=0; i<3; i++){
                if(val*data[i]<=n && visit.find(val*data[i])==visit.end())
                    q.push({val*data[i], level+1});
                if(val+data[i]<=n && visit.find(val+data[i])==visit.end())
                    q.push({val+data[i], level+1});
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}

