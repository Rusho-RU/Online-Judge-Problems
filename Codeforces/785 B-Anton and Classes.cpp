#include <bits/stdc++.h>
using namespace std;

#define MIN 1000000001
#define MAX 0

int main(){
    int n,m;
    long long a,b,max2=MAX,min1=MIN;
    scanf("%d",&n);
    while(n--){
        scanf("%I64d %I64d",&a,&b);
        if(b<min1) min1=b;
        if(a>max2) max2=a;
    }

    long long max1=MAX,min2=MIN;
    scanf("%d",&m);
    while(m--){
        scanf("%I64d %I64d",&a,&b);
        if(b<min2) min2=b;
        if(a>max1) max1=a;
    }

    long long hold1=max1-min1,hold2=max2-min2;

    if(hold1<0 && hold2<0) printf("0\n");
    else if(hold1>hold2) printf("%I64d\n",hold1);
    else printf("%I64d\n",hold2);
    return 0;
}
