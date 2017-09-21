#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        unordered_map<char,int>mat;
        int n,price,l,total=0;
        char c;
        scanf("%d",&n);
        getchar();
        while(n--){
            scanf("%c %d",&c,&price);
            getchar();
            mat[c]=price;
        }
        scanf("%d",&n);
        getchar();
        char s[10004];
        while(n--){
            gets(s);
            l=strlen(s);
            for(int i=0;i<l;i++)
                total+=mat[s[i]];
        }
        printf("%0.2lf$\n",total/100.00);
    }
    return 0;
}
