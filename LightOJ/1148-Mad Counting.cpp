#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        map<int, int>cnt;
        scanf("%d",&n);
        vector<int>data;

        for(int i=0; i<n; i++){
            int val;
            scanf("%d",&val);
            if(cnt.find(val)==cnt.end())
                data.push_back(val);
            cnt[val]++;
        }

        int population = 0;

        for(int i=0; i<data.size(); i++){
            int val = data[i];
            int hold = cnt[val]/(val+1);
            if(cnt[val]%(val+1)!=0)
                hold++;
            population += hold*(val+1);
        }

        printf("Case %d: %d\n",++Case,population);
    }

    return 0;
}

