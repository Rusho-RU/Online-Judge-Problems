#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define FasterIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie()

int main(){
    FasterIO();

    string ans[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
    int b1,g1,c1,b2,g2,c2,b3,g3,c3;

    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3){
        int sum = b1+g1+c1+b2+g2+c2+b3+g3+c3, cost = INF, hold, indx;

        hold=sum-b1-c2-g3;
        if(hold<cost)
            cost=hold, indx=0;

        hold=sum-b1-c3-g2;
        if(hold<cost)
            cost=hold, indx=1;

        hold=sum-b2-c1-g3;
        if(hold<cost)
            cost=hold, indx=2;

        hold=sum-b3-c1-g2;
        if(hold<cost)
            cost=hold, indx=3;

        hold=sum-b2-c3-g1;
        if(hold<cost)
            cost=hold, indx=4;

        hold=sum-b3-c2-g1;
        if(hold<cost)
            cost=hold, indx=5;

        cout<<ans[indx]<<" "<<cost<<endl;
    }
    return 0;
}
