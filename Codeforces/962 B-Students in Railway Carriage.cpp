#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, a;

    while(scanf("%d%d%d",&n,&p,&a)==3){
        char ch;
        char lastAssigned = 'n';

        int mx = max(p, a);
        int mn = min(p, a);

        for(int i=0; i<n; i++){
            scanf(" %c",&ch);

            if(ch=='.'){
                if(i==0){
                    if(mx){
                        mx--;
                        lastAssigned = 'x';
                    }
                    else if(mn){
                        mn--;
                        lastAssigned = 'n';
                    }
                }

                else if(lastAssigned=='x'){
                    if(mn)
                        mn--;
                    lastAssigned = 'n';
                }

                else if(lastAssigned=='n'){
                    if(mx)
                        mx--;
                    lastAssigned = 'x';
                }
            }

            else{
                if(mx < mn)
                    swap(mx, mn);
                if(mx)
                    lastAssigned = 'n';
                else
                    lastAssigned = 'x';
                }
        }

        printf("%d\n",p+a-mx-mn);
    }

    return 0;
}
