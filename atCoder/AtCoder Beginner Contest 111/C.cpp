#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int data[n], ans=0;

    for(int i=0; i<n; i++)
        scanf("%d",&data[i]);

    vector<int>v;
    int mn = INT_MAX, cnt1=0, cnt2=0;

    for(int i=0; i<n; i+=2){
        v.push_back(data[i]);
    }

    sort(v.begin(), v.end());

    for(int i=1; i<v.size(); i++)
        if(v[i]==v[i-1]) cnt1++;
        else{
            mn = min(mn, cnt1);
            cnt2++;
            cnt1=0;
        }

    if(mn==INT_MAX) mn=0;

    if(cnt2)
        ans+=mn;

    v.clear();
    mn = INT_MAX, cnt1=cnt2=0;

    for(int i=1; i<n; i+=2){
        v.push_back(data[i]);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
        if(v[i]==v[i-1]) cnt1++;
        else{
            mn = min(mn, cnt1);
            cnt2++;
            cnt1=0;
        }

    if(mn==INT_MAX) mn=0;

    if(cnt2)
        ans+=mn;

    if(ans)
        printf("%d\n",ans);
    else{
        int i;
        for(i=1; i<n; i++){
            if(data[i]!=data[i-1])
                break;
        }
        if(i==n)
            printf("%d\n",n/2);
        else
            printf("0\n");
    }

    return;
}

int main(){
    int n;

    while(scanf("%d",&n)==1){
        solve(n);
    }
}
