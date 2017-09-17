#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double w,s[7],sum,max,min;
    scanf("%d",&n);
    char c[50];
    while(n--){
        sum=0,max=0,min=11;
        scanf("%s%lf",c,&w);
        for(int i=0;i<7;i++){
            scanf("%lf",&s[i]);
            sum+=s[i];
            if(s[i]>max)
                max=s[i];
            if(s[i]<min)
                min=s[i];
        }
        sum-=min+max;
        printf("%s %.2lf\n",c,sum*w);
    }
    return 0;
}
