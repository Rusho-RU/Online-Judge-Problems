#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int digitSum(int n){
    return n%10+(n/10)%10;
}

int dist(int hh, int mm, int h, int m){
    int min1 = hh*60+mm;
    if(h<hh || (h==hh && m<mm))
        h+=24;
    int min2 = h*60+m;

    if(min2<min1)
        cout<<h<<" "<<m<<endl;

    return min2-min1;
}

int main(){
    FasterIO;

    int hh, mm, x;
    char ch;

    cin>>hh>>ch>>mm>>x;

    int ans = INT_MAX;

    for(int h=0; h<24; h++){
        for(int m=0; m<60; m++){
            int sum = digitSum(h) + digitSum(m);
            if(sum%x==0){
                ans = min(ans, dist(hh, mm, h, m));
            }
        }
    }

    if(ans==INT_MAX)
        cout<<"-1\n";
    else
        cout<<ans<<endl;

    return 0;
}
