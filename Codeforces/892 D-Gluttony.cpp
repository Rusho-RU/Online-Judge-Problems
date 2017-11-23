#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        vector<pair<int, int> >v;
        int val;
        int ans[n];

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            v.push_back(make_pair(val,i));
        }

        sort(v.begin(), v.end());

        for(int i=0; i<n; i++)
            printf("%d %d\n",v[i].second, v[i].first);

        for(int i=1; i<n; i++){
            ans[v[i].second] = v[i-1].first;
        }

        ans[v[0].second] = v[n-1].first;

        for(int i=0; i<n; i++){
            printf("%d ",ans[i]);
        }
        cout<<endl;
    }
    return 0;
}
