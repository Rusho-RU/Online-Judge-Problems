#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        long long temp;
        vector<long long>data;
        for(int i=0;i<n;i++){
            scanf("%I64d",&temp);
            data.push_back(temp);
        }
        sort(data.begin(),data.end());
        printf("%I64d\n",data[(data.size()-1)/2]);
    }
    return 0;
}
