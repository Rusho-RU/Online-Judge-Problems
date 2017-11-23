#include <bits/stdc++.h>
using namespace std;

#define MAX 100001

int main(){
    int n;
    scanf("%d",&n);

    vector<pair<int, int> >edge;
    map<int, map<int, bool> >mp;

    for(int i=1; i<=n; i++){
        int m;
        scanf("%d",&m);
        for(int j=0; j<m; j++){
            int val;
            scanf("%d",&val);
            if(mp[i][val] == false)
                edge.push_back(make_pair(i,val)), mp[i][val] = mp[val][i] = true;
        }
    }

    for(int i=0; i<edge.size(); i++)
        printf("%d %d\n",edge[i].first, edge[i].second);

    if(edge.size())
    return 0;
}
