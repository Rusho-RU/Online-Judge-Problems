#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    while(scanf("%lld",&n)==1){
        priority_queue<int>ara;
        stack<int>aa;
        long long h=n,hold,a=0,b=0,zero=1;
        int i;
        for(;h;){
            hold=h%10;
            if(hold==0)
                zero*=10;
            else
                ara.push(hold);
            h/=10;
        }
        for(i=ara.size()-1;i>-1;i--){
            hold=ara.top();
            ara.pop();
            a=a*10+hold;
            aa.push(hold);
        }
        a=a*zero;
        b=aa.top();
        aa.pop();
        b=b*zero;
        for(;!aa.empty();){
            hold=aa.top();
            aa.pop();
            b=b*10+hold;
        }
        long long dif=a-b;
        printf("%lld - %lld = %lld = 9 * %lld\n",a,b,dif,dif/9);
    }
    return 0;
}
