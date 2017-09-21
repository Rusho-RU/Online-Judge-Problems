#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,z;
    scanf("%d",&t);
    for(z=0;z<t;z++){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("Case %d: %d\n",z+1,a[(n-1)/2]);
    }
    return 0;
}
