#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];
        map<int, int>mp;
        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            mp[data[i]] = i;
        }

        map<int, int>::iterator it = mp.begin();
        int ans = 1000000000;

        for(;it!=mp.end(); it++)
            ans = min(ans, it->second);

        printf("%d\n",data[ans]);
    }

    return 0;
}
