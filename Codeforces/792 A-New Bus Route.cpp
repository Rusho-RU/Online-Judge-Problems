#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        map<long long, long long>m;
        long long temp;
        vector<long long>data;
        for(int i=0;i<n;i++){
            scanf("%I64d",&temp);
            data.push_back(temp);
        }
        sort(data.begin(),data.end());
        long long min=data[1]-data[0];
        m[min]++;;
        for(int i=2;i<data.size();i++){
            if(data[i]-data[i-1]<=min){
                min=data[i]-data[i-1];
                m[min]++;
            }
        }
        printf("%I64d %I64d\n",min,m[min]);
    }
    return 0;
}
