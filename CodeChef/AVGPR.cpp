#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        int cnt=0, data[n];

        map<int, bool>isPresent;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            int v = 2*data[i];
            isPresent[v] = true;
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int v = data[i] + data[j];
                if(isPresent[v])
                    cnt++;
            }
        }

        printf("%d\n",cnt);
    }

    return 0;
}
