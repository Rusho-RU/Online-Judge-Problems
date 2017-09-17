#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    while(scanf("%d %d",&n,&k)==2){
        vector<int>data;
        vector<int>v;
        int leader=0,temp;
        for(int i=1;i<=n;i++)
            data.push_back(i);
        for(int i=0;i<k;i++){
            scanf("%d",&temp);
            int hold=temp%data.size();
            int eliminate=leader+hold;
            if(eliminate>data.size()-1)
                eliminate=eliminate-data.size();
            v.push_back(data[eliminate]);
            data.erase(data.begin()+eliminate);
            leader=eliminate;
        }
        printf("%d",v[0]);
        for(int i=1;i<v.size();i++)
            printf(" %d",v[i]);
        printf("\n");
    }
    return 0;
}
