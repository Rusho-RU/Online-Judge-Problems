#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    if(a.first==b.first)
        return a.second > b.second;
    return a.first<b.first;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n, m, k;
        scanf("%d %d %d",&n,&m,&k);

        vector<pair<int, int> >path;

        for(int i=0; i<k; i++){
            int a,b;
            scanf("%d %d",&a, &b);
            path.push_back(make_pair(a, b));
        }

        sort(path.begin(), path.end(), cmp);

        long long crossed = (k*(k-1))/2;

        for(int i=1; i<k; i++){
            if(path[i].first > path[i-1].first && path[i].second < path[i-1].second){
                continue;
            }
            crossed-=(k-i);
        }

        printf("Test case %d: %lld\n",++Case,crossed);
    }

    return 0;
}
