#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;

    while(scanf("%d%d",&n,&k)==2){
        int data[n], val, sum=0;

        map<int, int>cnt;

        for(int i=0; i<n; i++){
            scanf("%d",&data[i]);
            cnt[data[i]]++;
        }

        for(int i=0; i<n; i++){
            int dif = k - data[i];
            int c = cnt[dif];

            if(c>0){
                sum+=c;
                if(dif == data[i])
                    sum--;
                cnt[data[i]]--;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}
