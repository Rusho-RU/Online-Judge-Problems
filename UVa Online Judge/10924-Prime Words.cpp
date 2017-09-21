#include <bits/stdc++.h>
using namespace std;
#define limit 2000
int main(){
    map<int,bool>prime;
    prime[3]=true,prime[2]=true;
    int l=sqrt(limit+1);
    for(int x=1;x<=l;x++)
        for (int y=1;y<=l;y++){
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
    for(int r=5;r<=l;r++)
        if(prime[r])
            for(int i=r*r;i<limit;i+=r*r)
                prime[i]=false;
    char s[25];
    while(gets(s)){
        int sum=0,l=strlen(s),i;
        for(i=0;i<l;i++){
            if(s[i]>='a' && s[i]<='z')
                sum+=s[i]-96;
            else
                sum+=s[i]-38;
        }
        if(sum==1) sum++;
        if(prime[sum])
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
