#include <stdio.h>

#define MAX 2000010

const int MOD = 1000000007;

char s[MAX];

int strlength(){
    int i;
    for(i=0; s[i]!='\0'; i++);
    return i;
}

int main(){
    while(scanf("%s", &s)==1){
        int i, len = strlength();

        long long sum=0, ans=0;

        for(i=0; i<len; i++){
            sum = ((sum*10)%MOD + (i+1)*(s[i]-'0'))%MOD;
            ans = (ans+sum)%MOD;
        }

        printf("%lld\n", ans);
    }

    return 0;
}
