#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    return a.first < b.first;
}

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int val;
        vector<pair<int, int> >v;

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            v.push_back(make_pair(val, i+1));
        }

        sort(v.begin(), v.end(), cmp);

        for(int i=0, j=n-1; i<n/2; i++, j--){
            printf("%d %d\n",v[i].second, v[j].second);
        }
    }

    return 0;
}
