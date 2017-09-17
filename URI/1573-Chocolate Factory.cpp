#include <bits/stdc++.h>
using namespace std;

int cube[1001];

int main(){
    for(int i=0;i<1001;i++)
        cube[i]=i*i*i;

    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c) && a+b+c){
        int i,f=a*b*c;

        for(i=0;i<1001;i++)
            if(f<cube[i])
                break;

        printf("%d\n",i-1);
    }

    return 0;
}
