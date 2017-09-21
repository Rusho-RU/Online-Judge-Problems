#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool found=false;
    while(scanf("%d",&n),n){
        if(found) printf("\n");
        found=true;
        long long data[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&data[i]);
        sort(data,data+n);

        for(int a=0;n-a>5;a++)
            for(int b=a+1;n-b>4;b++)
                for(int c=b+1;n-c>3;c++)
                    for(int d=c+1;n-d>2;d++)
                        for(int e=d+1;n-e>1;e++)
                            for(int f=e+1;n-f>0;f++)
                                printf("%lld %lld %lld %lld %lld %lld\n",data[a],data[b],data[c],data[d],data[e],data[f]);

    }
    return 0;
}
