#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        char str[100];
        int n;
        scanf("%d",&n);

        double root = sqrt(n);
        sprintf(str,"%.10lf",root);

        int length = strlen(str);

        for(int i=length-7; i>=0; i--)
            printf("%c",str[i]);
        puts("");
    }

    return 0;
}
