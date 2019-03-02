#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define pii pair<int, int>

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int ammount[n], cost[n];

        pair<int, int>data[n];

        for(int i=0; i<n; i++)
            cin>>ammount[i];

        for(int i=0; i<n; i++){
            cin>>cost[i];
            data[i] = {cost[i], i};
        }

        sort(data, data+n);

        int from = 0;

        while(m--){
            long long total = 0;
            bool satisfied = true;

            int t, d, mn;
            cin>>t>>d;
            t--;

            mn = min(d, ammount[t]);

            total += 1LL * cost[t]*mn;
            d-=mn;
            ammount[t]-=mn;

            int i = from;

            while(d){
                if(i>=n){
                    satisfied = false;
                    break;
                }

                int type = data[i].second;

                mn = min(d, ammount[type]);

                total+=1LL * cost[type] *mn;
                d-=mn;
                ammount[type]-=mn;

                if(!ammount[type])
                    from++, i++;
            }

            if(satisfied)
                cout<<total<<endl;
            else
                cout<<"0\n";
        }
    }

    return 0;
}
