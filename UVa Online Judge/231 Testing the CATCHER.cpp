#include <bits/stdc++.h>
using namespace std;

int h;
vector<int>v;

int solve(){
    int n = v.size(), LIS[n];

    fill_n(LIS, n, 1);

    for(int i=n-1; i>=0; i--)
        for(int j=i-1; j>=0; j--)
            if(v[i] <= v[j])
                LIS[j] = max(LIS[j], LIS[i] + 1);

    return LIS[max_element(LIS, LIS+n) - LIS];
}

int main(){
    int Case = 0;

    while(scanf("%d",&h)==1){
        if(h==-1){
            if(v.empty()) continue;

            int ans = solve();
            if(Case)
                puts("");
            printf("Test #%d:\n  maximum possible interceptions: %d\n", ++Case, ans);
            v.clear();
            continue;
        }

        v.push_back(h);
    }
}
