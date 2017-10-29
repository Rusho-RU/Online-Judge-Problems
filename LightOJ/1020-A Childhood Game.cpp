#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        char name[10];
        scanf("%d %s",&n,name);

        printf("Case %d: ",++Case);

        if(name[0] == 'B')
            if(n%3)
                puts("Bob");
            else
                puts("Alice");
        else
            if(n%3==1)
                puts("Bob");
            else
                puts("Alice");
    }

    return 0;
}
