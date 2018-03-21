#include <bits/stdc++.h>
using namespace std;

int main(){
    char mon,tues,wed,thurs,fri,sat,sun;

    while(scanf(" %c %c %c %c %c %c %c",&mon,&tues,&wed,&thurs,&fri,&sat,&sun)==7){
        int drinks = 3;

        if(mon=='W')
            drinks++;
        if(tues=='W')
            drinks++;
        if(thurs=='W')
            drinks++;
        if(sun=='W')
            drinks++;

        printf("%d\n",drinks);
    }

    return 0;
}
