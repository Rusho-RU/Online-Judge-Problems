#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,m;
    while(scanf("%d%d%d",&n,&k,&m)==3){
        int a;
        vector<int>v[m];

        for(int i=0; i<n; i++){
            scanf("%d",&a);
            v[a%m].push_back(a);
        }

        int i;

        for(i=0; i<m; i++)
            if(v[i].size()>=k)
                break;

        if(i==m)
            puts("No");
        else{
            puts("Yes");
            printf("%d",v[i][0]);
            for(int j=1; j<k; j++)
                printf(" %d",v[i][j]);
            cout<<endl;
        }
    }

    return 0;
}
