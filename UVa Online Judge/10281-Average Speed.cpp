#include <bits/stdc++.h>
using namespace std;

int main(){
    long long h=0,m=0,s=0,v=0,in_h=0,in_m=0,in_s=0,in_v=0;
    int r;
    double ans=0,t;
    char c[30];
    gets(c);
    r=sscanf(c,"%lld:%lld:%lld %lld",&h,&m,&s,&v);
    in_h=h,in_m=m,in_s=s,in_v=v;
    if(r==3)
        printf("%s %0.2lf km\n",c,ans/1000);
    while(gets(c)){
        r=sscanf(c,"%lld:%lld:%lld %lld",&h,&m,&s,&v);
        t=(h-in_h)*3600+(m-in_m)*60+(s-in_s);
        ans+=t*(in_v*5.0/18.0);
        in_h=h,in_m=m,in_s=s,in_v=v;
        if(r==3){
            printf("%s %0.2lf km\n",c,ans/1000);
        }
    }
    return 0;
}
