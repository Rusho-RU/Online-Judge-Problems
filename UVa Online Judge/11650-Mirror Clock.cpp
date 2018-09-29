#include <bits/stdc++.h>
using namespace std;

int findMin(int mm){
    if(mm==0 || mm==30)
        return mm;

    return 60-mm;
}

int findHour(int hh){
    if(hh==12 || hh==6)
        return hh;

    return 12-hh;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int hh, mm;
        scanf("%d:%d",&hh,&mm);

        int h = findHour(hh);
        int m = findMin(mm);

        if(mm)
            h--;
        if(h==0)
            h = 12;

        printf("%02d:%02d\n",h,m);
    }

    return 0;
}
