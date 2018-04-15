#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    while(scanf("%d %d",&n,&m)==2){
        int data[n][m];

        bool simple[n][m];

        for(int i=0; i<n; i++){
            int mn = INT_MAX;
            for(int j=0; j<m; j++){
                scanf("%d",&data[i][j]);
                mn = min(mn, data[i][j]);
            }

            for(int j=0; j<m; j++)
                if(data[i][j]==mn)
                    simple[i][j] = true;
                else
                    simple[i][j] = false;
        }

        vector<int>v;

        for(int i=0; i<m; i++){
            int cnt = 0;
            for(int j=0; j<n; j++){
                if(simple[j][i])
                    cnt++;
            }

            if(cnt >= n/2)
                v.push_back(i+1);
        }

        if(v.size()==0){
            puts("0");
            continue;
        }

        for(int i=0; i<v.size(); i++){
            printf("%d",v[i]);
            if(i==v.size()-1)
                puts("");
            else
                printf(" ");
        }
    }

    return 0;
}
