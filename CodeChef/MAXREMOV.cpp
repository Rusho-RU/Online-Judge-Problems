#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 100010

int height[MAX], cntTarget[MAX], cntTargetPlus[MAX];
pair<int, int>seg[MAX];

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        memset(height, 0, sizeof height);

        for(int i=0; i<n; i++){
            int l, r;
            cin>>l>>r;
            seg[i].first = l;
            seg[i].second = r;

            height[l]++;
            height[r+1]--;
        }

        for(int i=1; i<MAX; i++){
            height[i] += height[i-1];

            cntTarget[i] = cntTarget[i-1];
            cntTargetPlus[i] = cntTargetPlus[i-1];

            if(height[i]==k)
                cntTarget[i]++;
            if(height[i]==k+1)
                cntTargetPlus[i]++;
        }

        int ans = cntTarget[MAX-1];
        int mx = INT_MIN;

        for(int i=0; i<n; i++){
            int l = seg[i].first;
            int r = seg[i].second;

            mx = max(mx, cntTargetPlus[r]-cntTargetPlus[l-1] - cntTarget[r] + cntTarget[l-1]);
        }

        cout<<ans+mx<<endl;
    }

    return 0;
}

