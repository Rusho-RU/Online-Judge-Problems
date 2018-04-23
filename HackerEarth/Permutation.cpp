#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    while(scanf("%d",&n)==1){
        int data[n], temp[n], cnt=0;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            temp[i] = data[i];
        }

        sort(temp, temp+n);

        for(int i=0; i<n; i++){
            int id = INT_MAX;
            for(int j=i+1; j<n; j++){
                if(data[j]==temp[i]){
                    id = j;
                    break;
                }
            }

            if(id == INT_MAX) continue;
            cnt++;
            reverse(data, data+id+1);
        }

        printf("%d\n",cnt);
    }

    return 0;
}
