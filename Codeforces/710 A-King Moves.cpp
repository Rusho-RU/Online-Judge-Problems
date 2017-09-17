#include <bits/stdc++.h>
using namespace std;

int main(){
    int rem[106];
    char c;
    for(int i=97;i<=105;i++)
        rem[i]=i-96;

    int n;
    while(scanf("%c%d",&c,&n)==2){
        int count=0;
        if(rem[c]+1<=8 && n+1<=8)
            count++;
        if(rem[c]-1>0 && n+1<=8)
            count++;
        if(rem[c]+1<=8 && n-1>0)
            count++;
        if(rem[c]-1>0 && n-1>0)
            count++;
        if(n+1<=8)
            count++;
        if(n-1>0)
            count++;
        if(rem[c]+1<=8)
            count++;
        if(rem[c]-1>0)
            count++;
        printf("%d\n",count);
    }
    return 0;
}
