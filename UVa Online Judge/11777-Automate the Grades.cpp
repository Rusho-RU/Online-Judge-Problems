#include <bits/stdc++.h>
using namespace std;

int main(){
    int term1, term2, fTerm, attendance, test1, test2, test3;
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        scanf("%d %d %d %d %d %d %d",
              &term1, &term2, &fTerm, &attendance, &test1, &test2, &test3);

        int sum = test1 + test2 + test3;
        sum-=(min(test1, min(test2, test3)));
        sum/=2;
        sum+=term1 + term2 + fTerm + attendance;

        printf("Case %d: ",++Case);

        if(sum>=90)
            puts("A");
        else if(sum>=80)
            puts("B");
        else if(sum>=70)
            puts("C");
        else if(sum>=60)
            puts("D");
        else
            puts("F");
    }

    return 0;
}
