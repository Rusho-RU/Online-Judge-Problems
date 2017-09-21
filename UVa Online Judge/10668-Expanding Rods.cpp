#include <bits/stdc++.h>
using namespace std;
#define rad 2*acos(0)/180
int main(){
    double l,n,c;
    while(scanf("%lf%lf%lf",&l,&n,&c),l>=0,n>=0,c>=0){
        int i;
        double lp=(1+n*c)*l,ratio=l/lp;
        double low=0,high=180,av,hold,dif,Rad;
        for(i=0;i<100000;i++){
            av=(low+high)/2;
            Rad=av*rad;
            hold=(2*sin(Rad/2))/Rad;
            dif=hold-ratio;
            if(dif>0.0000000000000001 && dif<0.000000000000001)
                break;
            else if(hold<ratio)
                high=av;
            else if(hold>ratio)
                low=av;
        }
        double radius=lp/(av*rad),half=l/2,ans=radius*radius-half*half;
        printf("%0.3lf\n",radius-sqrt(ans));
    }
    return 0;
}
