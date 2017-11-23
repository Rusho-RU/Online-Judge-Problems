#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n];
        bool info[n];
        bool info2[n];

        memset(info2, 1, sizeof info2);
        memset(info, 0, sizeof info);

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            info[data[i]] = 1;
        }

        int gcd;
        bool possible = true;


        for(int i=0; i<n && possible; i++){
            gcd = data[i];
            int cnt=0;
            for(int j=i-1; j>=0; j--){
                gcd = __gcd(gcd,data[j]);
                if(!info[gcd])
                    possible = false;
                if(data[j]%data[i] == 0)
                    cnt++;
            }

            if(cnt>1)
                info[i] = false;
        }

        if(possible){
            for(int i=0; i<n; i++)
                if(info[data[i]])
        }

        else
            puts("-1");
    }

    return 0;
}
