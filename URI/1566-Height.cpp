#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        vector<int>ara;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&x);
            ara.push_back(x);
        }
        sort(ara.begin(),ara.end());
        int limit=ara.size();
        for(int i=0;i<limit-1;i++)
            printf("%d ",ara[i]);
        printf("%d\n",ara[limit-1]);
    }
    return 0;
}
