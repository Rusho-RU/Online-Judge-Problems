#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

bool cnt[MAX];

int main(){
    int n,q;

    while(scanf("%d%d",&n, &q)==2){
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        while(q--){
            char ch;
            int l,r;
            scanf(" %c %d %d",&ch,&l,&r);

            if(ch=='Q'){
                int ans = 0;
                for(int i=l; i<r; i++){
                    if(!cnt[data[i]])
                        ans++;
                    cnt[data[i]] = true;;
                }
                for(int i=l; i<r; i++)
                    cnt[data[i]] = false;
                printf("%d\n",ans);
            }

            else
                data[l] = r;
        }
    }
    return 0;
}
