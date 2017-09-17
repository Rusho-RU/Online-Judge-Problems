#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,l;
    while(scanf("%I64d %I64d",&n,&l)==2){
        long long value;
        vector<long long>pos;
        for(int i=0;i<n;i++){
            scanf("%I64d",&value);
            pos.push_back(value);
        }
        sort(pos.begin(),pos.end());
        double max=pos[0],dif;
        dif=l-pos[n-1];
        if(dif>max) max=dif;
        for(int i=1;i<n;i++){
            dif=(pos[i]-pos[i-1])/2.0;
            if(dif>max) max=dif;
        }
        printf("%.10lf\n",max);
    }
    return 0;
}
