#include <bits/stdc++.h>
using namespace std;

int absolute(int n){
    if(n<0) return -n;
    return n;
}

int main(){
    int k;

    while(scanf("%d",&k)==1){
        char c;
        getchar();
        int cnt[10]={};
        int sum=0;

        while(scanf("%c",&c) && c!='\n'){
            sum+=c-'0';
            cnt[c-'0']++;
        }

        if(sum>=k){
            puts("0");
            continue;
        }

        k-=sum;
        int ans=0,i=0;

        for(int i=0;i<10 && k>0;i++){
            k-=cnt[i]*(9-i);
            if(k<0)
                ans+=cnt[i]-(absolute(k)/(9-i));
            else
                ans+=cnt[i];
        }

        printf("%d\n",ans);
    }
    return 0;
}
