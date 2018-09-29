#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        char step;
        int level = 0, valley = 0;

        for(int i=0; i<n; i++){
            scanf(" %c",&step);

            if(step=='U')
                level++;
            else{
                if(level==0)
                    valley++;
                level--;
            }
        }

        printf("%d\n",valley);
    }

    return 0;
}

