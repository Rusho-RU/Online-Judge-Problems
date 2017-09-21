#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        map<int, long>a;
        int n,m,i;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            m=i;
            for(;m;){
                a[m%10]++;
                m/=10;
            }
        }
        for(i=0;i<10;i++){
            if(i==0)
                printf("%ld",a[i]);
            else
                printf(" %ld",a[i]);
        }
        printf("\n");
    }
    return 0;
}
