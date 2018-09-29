#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        bool isPresent[101] = {};
        vector<int>absent;

        for(int i=0; i<n; i++){
            int v;
            scanf("%d",&v);
            isPresent[v] = true;
        }

        for(int i=1; i<=n; i++)
            if(!isPresent[i])
                absent.push_back(i);

        for(int i=0; i<absent.size(); i++){
            printf("%d",absent[i]);
            if(i==absent.size()-1)
                puts("");
            else
                printf(" ");
        }
    }

    return 0;
}
