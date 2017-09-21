#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++){
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        int sum1=r1+c1,sum2=r2+c2,hold1,hold2;
        printf("Case %d: ",z+1);
        if((sum1%2==0 && sum2%2!=0) || (sum1%2!=0 && sum2%2==0))
            printf("impossible\n");
        else{
            hold1=r1-r2,hold2=c1-c2;
            if(abs(hold1)==abs(hold2))
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
