#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        map<long long, int>m;
        long long a[n],i,min=1000000006,max=-1;
        for(i=0;i<n;i++){
            scanf("%I64d",&a[i]);
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
            m[a[i]]++;
        }
        int s=n-m[max]-m[min];
        if(max==min) s+=m[max];
        printf("%d\n",s);
    }
    return 0;
}
