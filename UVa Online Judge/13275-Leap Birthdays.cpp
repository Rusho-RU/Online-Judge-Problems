#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
    if(year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    return false;
}

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int a,b,c,d,cnt=0;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a==29){
            for(int i = c+1; i<=d; i++)
                if(isLeapYear(i))
                    cnt++;
        }

        else
            cnt = d-c;

        printf("Case %d: %d\n",++Case, cnt);
    }

    return 0;
}

