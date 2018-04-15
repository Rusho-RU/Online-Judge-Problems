#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, Case=0;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int data[n];

        for(int i=0; i<n; i++)
            scanf("%d",&data[i]);

        bool ok;

        for(int j=0; j<n; j++){
            for(int i=0; i+2<n; i++){
                if(data[i] > data[i+2]){
                    swap(data[i], data[i+2]);
                }
            }
        }

        ok = true;

        printf("Case #%d: ",++Case);

        for(int i=0; i+1<n; i++){
            if(data[i] > data[i+1]){
                printf("%d\n",i);
                ok = false;
                break;
            }
        }

        if(ok)
            puts("ok");
    }

    return 0;
}
