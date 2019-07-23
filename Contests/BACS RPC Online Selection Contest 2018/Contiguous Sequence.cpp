#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int a,b;
        scanf("%d",&a);
        n--;
        bool exists = false;

        while(n--){
            scanf("%d",&b);
            if(b-a==1)
                exists = true;
            a = b;
        }

        printf("Case %d: ",++Case);

        if(exists)
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}

