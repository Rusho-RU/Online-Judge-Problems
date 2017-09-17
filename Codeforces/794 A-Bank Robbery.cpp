#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        int n,value,count=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&value);
            if(value>b && value<c)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
