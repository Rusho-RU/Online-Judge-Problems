#include <bits/stdc++.h>
using namespace std;

#define MAX 31

long long pow2[MAX];
char zeros[200];
char line[200];

void pCalculate(){
    pow2[0] = 1;
    zeros[0] = '0';
    line[0] = '-';
    for(int i=1; i<MAX; i++)
        pow2[i] = pow2[i-1]*2;

    for(int i=0; i<200; i++)
        zeros[i] = '0', line[i] = '-';

    return;
}

long long toDecimal(char* s){
    long long n = 0;
    int len = strlen(s);

    for(int i=len-1; i>=0; i--)
        if(s[i]=='1')
            n+=pow2[len-i-1];

    return n;
}

void toBinary(long long n, char* s){
    int i=0,j;
    char temp[200];
    while(n){
        temp[i++] = (n%2) + '0';
        n/=2;
    }

    temp[i]='\0';
    i--;
    for(j=0; i>=0; j++, i--)
        s[j] = temp[i];
    s[j] = '\0';

    return;
}

int main(){
    pCalculate();

    char a[50], b[50];

    bool first = false;

    while(scanf("%s%s",a,b) && toDecimal(a) + toDecimal(b)){
        if(first) puts("");
        first = true;

        long long ans = toDecimal(a) * toDecimal(b);
        char bAns[200];
        toBinary(ans, bAns);

        int len1 = strlen(a);
        int len2 = strlen(b);
        int len3 = strlen(bAns);

        printf("%*.*s\n",len3, len1, a);
        printf("%*.*s\n",len3, len2, b);
        printf("%*.*s\n",len3, max(len1, len2), line);

        for(int i=0; i<len2; i++){
            if(b[len2-i-1]=='1')
                printf("%*.*s\n",len3-i, len1, a);
            else
                printf("%*.*s\n",len3-i, len1, zeros);
        }

        printf("%*.*s\n",len3, len3, line);
        printf("%s\n",bAns);
    }

    return 0;
}
