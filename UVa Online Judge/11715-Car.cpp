#include <bits/stdc++.h>
using namespace std;

int main(){
    int ind,i=1;
    double x,y,z,u,v,s,t,a,ans1,ans2;
    while(scanf("%d",&ind),ind){
        scanf("%lf%lf%lf",&x,&y,&z);
        if(ind==1){
            u=x,v=y,t=z;
            a=(v-u)/t;
            s=(v*v-u*u)/(2*a);
            ans2=a,ans1=s;
        }
        else if(ind==2){
            u=x,v=y,a=z;
            t=(v-u)/a;
            s=(v*v-u*u)/(2*a);
            ans2=t,ans1=s;
        }
        else if(ind==3){
            u=x,a=y,s=z;
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            ans1=v,ans2=t;
        }
        else if(ind==4){
            v=x,a=y,s=z;
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            ans1=u,ans2=t;
        }
        printf("Case %d: %0.3lf %0.3lf\n",i,ans1,ans2);
        i++;
    }
    return 0;
}
