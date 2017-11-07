#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n][6];
        map<int, bool>found;

        for(int i=0; i<n; i++)
            for(int j=0; j<6; j++)
                scanf("%d",&data[i][j]);

        for(int i=0; i<n; i++){
            for(int j=0; j<6; j++){
                found[data[i][j]] = true;
                for(int k=0; k<n; k++){
                    if(k==i)
                        continue;
                    for(int l=0; l<6; l++){
                        found[data[i][j]*10 + data[k][l]] = true;
                    }
                }
            }
        }

        int i;

        for(i=1;;i++){
            if(!found[i])
                break;
        }

        printf("%d\n",i-1);
    }
    return 0;
}
