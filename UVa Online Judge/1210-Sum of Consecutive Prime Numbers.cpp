#include <bits/stdc++.h>
using namespace std;
#define limit 10001
int main(){
    map<int,bool>prime;
    prime[3]=true,prime[2]=true;
    for(int x=1;x*x<limit;x++)
        for (int y=1;y*y<limit;y++){
            int n=(4*x*x)+(y*y);
            if (n<=limit && (n%12==1 || n%12==5))
                prime[n]^=true;

            n=(3*x*x)+(y*y);
            if(n<=limit && n%12==7)
                prime[n]^=true;

            n=(3*x*x)-(y*y);
            if(x>y && n<=limit && n%12==11)
                prime[n]^=true;
        }
    for(int r=5;r*r<limit;r++)
        if(prime[r])
            for(int i=r*r;i<limit;i+=r*r)
                prime[i]=false;
    vector<int>a;
    for(int i=0;i<10001;i++)
        if(prime[i])
            a.push_back(i);
    int n;
    while(scanf("%d",&n),n){
        int i=0,sum,count=0,j;
        for(;a[i]<=n;i++){
            sum=0;
            for(j=i;sum<=n;j++){
                sum+=a[j];
                if(sum==n){
                    count++;
                    break;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
