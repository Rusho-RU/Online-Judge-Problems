#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    while(scanf("%d%d",&n,&k)==2){
        double sum=0,value;
        for(int i=0;i<n;i++){
            scanf("%lf",&value);
            sum+=value;
        }

        int i;
        double limit=k-0.5;

        if((sum/n)>=limit){
            puts("0");
            continue;
        }

        for(i=1;;i++){
            sum+=k;
            double hold=sum/(n+i);
            if(hold>=limit)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}
