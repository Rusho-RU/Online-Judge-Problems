#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        vector<int>one, not_one;
        int degree[n];
        int sum = 0;

        for(int i=0; i<n; i++){
            cin>>degree[i];

            degree[i]==1 ? one.push_back(i) : not_one.push_back(i);
            sum+=degree[i];
        }

        if(sum < 2*(n-1)){
            cout<<"NO\n";
            continue;
        }

        int sz_not_one = not_one.size();
        int sz_one = one.size();

        cout<<"YES"<<" "<<min(n-1, sz_not_one+1)<<endl;
        cout<<n-1<<endl;

        vector<pair<int, int> >ans;

        for(int i=1; i<sz_not_one; i++){
            int u = not_one[i-1];
            int v = not_one[i];

            ans.push_back(make_pair(u, v));
            degree[u]--, degree[v]--;
        }

        if(sz_one>0){
            int u = not_one[sz_not_one-1];
            int v = one[0];
            ans.push_back(make_pair(u, v));
            degree[u]--;
        }

        int i=1, j=0;

        while(i<sz_one){
            int u = not_one[j];
            while(i<sz_one && degree[u]--){
                int v = one[i++];
                ans.push_back(make_pair(u, v));
            }
            j++;
        }

        for(int i=0; i<ans.size(); i++)
            cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
    }

    return 0;
}

