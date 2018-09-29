#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
        }

        map<int, bool>rem;
        vector<int>v;

        for(int i=n-1; i>=0; i--){
            if(rem[data[i]]==false){
                v.push_back(data[i]);
            }
            rem[data[i]] = true;
        }

        printf("%d\n",v.size());

        for(int i=v.size()-1; i>=0; i--){
            printf("%d ",v[i]);
        }
        puts("");
    }

    return 0;
}

