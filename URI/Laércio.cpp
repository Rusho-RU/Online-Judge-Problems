#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n, val;
        scanf("%d",&n);
        vector<int>data, ans;

        for(int i=0; i<n; i++){
            scanf("%d",&val);
            if(val&1)
                data.push_back(val);
        }

        sort(data.begin(), data.end());

        for(int i=data.size()-1, j=0; j<=i; j++, i--){
            ans.push_back(data[i]);
            if(i==j)
                continue;
            ans.push_back(data[j]);
        }

        for(int i=0; i<ans.size(); i++){
            printf("%d",ans[i]);
            if(i==ans.size()-1)
                puts("");
            else
                printf(" ");
        }

        puts("");
    }

    return 0;
}
