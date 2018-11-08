#include <bits/stdc++.h>
using namespace std;

#define MAX 1000050

int zeros[MAX], ones[MAX];

int main(){
    int Case = 0;

    char s[MAX];

    while(gets(s) && s[0]!='\0'){
        int len = strlen(s);

        zeros[0] = ones[0] = ones[1] = zeros[1] = 0;

        if(s[0]=='0') zeros[1] = 1;
        else ones[1] = 1;

        for(int i=1; i<len; i++){
            zeros[i+1] = zeros[i];
            ones[i+1] = ones[i];

            if(s[i]=='0') zeros[i+1]++;
            else ones[i+1]++;
        }

        int q;
        scanf("%d",&q);

        printf("Case %d:\n",++Case);

        while(q--){
            int i,j;
            scanf("%d%d",&i,&j);
            i++, j++;

            if(i>j) swap(i, j);

            if(zeros[i-1]==zeros[j] || ones[i-1]==ones[j])
                puts("Yes");
            else
                puts("No");
        }

        getchar();
    }

    return 0;
}

