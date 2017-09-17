#include <bits/stdc++.h>
using namespace std;

int main(){
    int ev1,ev2,at,d;
    while(scanf("%d%d%d%d",&ev1,&ev2,&at,&d)==4){
        if(ev1==0 && ev2==0 && at==0 && d==0)
            break;
        int h1=0,h2=0;
        while(ev1>0)
            ev1-=d,h1++;
        while(ev2>0)
            ev2-=d,h2++;
        double p,ans;
        if(at==3){
            p=(double)h1/(h1+h2);
            printf("%0.1lf\n",p*100);
        }
        else{
            p=(6.0-at)/at;
            ans=(1.0-pow(p,h1))/(1-pow(p,h1+h2));
            printf("%0.1lf\n",ans*100);
        }
    }
    return 0;
}
