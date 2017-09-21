#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a;
    int n,limit,sum,i,j;
    for(;;){
        scanf("%d",&n);
        a.push_back(n);
        if(n==0)
            break;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0;;i++){
        n=a[i];
        if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }
        sum=1;
        if(n==1) sum--;
        limit=sqrt(n);
        for(j=2;j<=limit;j++){
            if(n%j==0){
                if(j==n/j)
                    sum+=j;
                else sum+=j+(n/j);
            }
            if(sum>n)
                break;
        }
        if(sum==n)
            printf("%5d  PERFECT\n",n);
        else if(sum<n)
            printf("%5d  DEFICIENT\n",n);
        else
            printf("%5d  ABUNDANT\n",n);
    }
    return 0;
}
