#include <bits/stdc++.h>
using namespace std;
#define limit 2001
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
    int t;
    scanf("%d",&t);
    getchar();
    for(int z=0;z<t;z++){
        bool wtf=false;
        char s[2005],c;
        gets(s);
        int i,l=strlen(s);
        map<char, int>f;
        for(i=0;i<l;i++)
            f[s[i]]++;
        printf("Case %d: ",z+1);
        for(c='0';c<='9';c++)
            if(prime[f[c]]){
                wtf=true;
                printf("%c",c);
            }
        for(c='A';c<='Z';c++)
            if(prime[f[c]]){
                wtf=true;
                printf("%c",c);
            }
        for(c='a';c<='z';c++)
            if(prime[f[c]]){
                wtf=true;
                printf("%c",c);
            }
        if(!wtf)
            printf("empty");
        printf("\n");
    }
    return 0;
}
