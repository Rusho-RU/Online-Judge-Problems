#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair <pair<int, int>, int >& a, const pair <pair<int, int>, int >& b){
    if(a.first.first == b.first.first)
        return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}

int main(){
    int n;

    while(scanf("%d",&n)==1){
        vector<pair <pair<int, int>, int > >v;

        for(int i=0; i<n; i++){
            int l,r;
            scanf("%d %d",&l,&r);
            v.push_back(make_pair(make_pair(l, r), i));
        }

        sort(v.begin(), v.end(), cmp);

        int mx = -1, ansI = -1, ansJ = -1, prev;

        for(int i=0; i<n; i++){
            if(v[i].first.second > mx){
                mx = v[i].first.second;
                prev = v[i].second;
            }

            else{
                ansJ = prev+1;
                ansI = v[i].second+1;
                break;
            }
        }

        printf("%d %d\n",ansI, ansJ);
    }

    return 0;
}
