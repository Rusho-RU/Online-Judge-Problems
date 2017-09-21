#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)==1){
        int a[n],count=0,l=n-1;
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(int i=0;i<l;i++)
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j]) count++;

        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
