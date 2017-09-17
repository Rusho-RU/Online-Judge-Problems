#include <bits/stdc++.h>
using namespace std;

#define MAX 27
typedef long long ll;

int main(){
    int t,Case=0;
    int power[MAX];
    power[0]=1;

    for(int i=1;i<MAX;i++)
        power[i]=power[i-1]*2;

    scanf("%d",&t);

    while(t--){
        int n,Count,num;
        ll sum=0,h1,h2;
        scanf("%d",&n);
        vector<int>v;
        h1=((ll)n*(n-1))/2;

        for(int i=0;i<n;i++){
            scanf("%d",&num);
            v.push_back(num);
        }

        for(int i=0;i<MAX;i++){
            Count=0;
            for(int j=0;j<v.size();j++)
                if(v[j] & power[i])Count++;
            Count=n-Count;
            h2=((ll)Count*(Count-1))/2;
            sum+=(h1-h2)*power[i];
        }

        printf("Case %d: %lld\n",++Case,sum);
    }
    return 0;
}

