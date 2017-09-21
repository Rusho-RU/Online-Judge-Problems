#include <bits/stdc++.h>
using namespace std;
#define pi 2*acos(0)
int main(){
    int t,i;
    scanf("%d",&t);
    double a[t];
    for(i=0;i<t;i++){
        int d,l;
        scanf("%d%d",&d,&l);
        if(!d)
            a[i]=pi*(l/2.0)*(l/2.0);
        else{
            double hold=l/2.0,h=d/2.0,area=pi*(hold)*sqrt(hold*hold-h*h);
            a[i]=area;
        }
    }

    for(i=0;i<t;i++)
        printf("%0.3lf\n",a[i]);

    return 0;
}
