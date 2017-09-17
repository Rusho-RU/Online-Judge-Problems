#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++){
        long long k;
        scanf("%lld",&k);
        long long hold=4*(2*k-2)+1;
        double sq=sqrt(hold);
        if((int)sq!=sq)
            a[i]=0;
        else{
            a[i]=1;
        }
    }
    for(int i=0;i<t;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
