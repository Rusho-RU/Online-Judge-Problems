#include <bits/stdc++.h>
using namespace std;

bool check(double db){
    if(db>=1.6 && db<=1.7)
        return true;
    return false;
}

int main(){
    int t, cnt=0;
    scanf("%d",&t);

    while(t--){
        int w, h;

        scanf("%d%d",&w,&h);

        if(w<h)
            swap(w, h);

        double db = (double)w/h*1.0;

        if(check(db))
            cnt++;
    }

    printf("%d\n",cnt);
}
