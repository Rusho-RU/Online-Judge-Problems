#include <bits/stdc++.h>
using namespace std;

#define MAX 0x3f3f3f3f

vector<int>v;
int M;

void take(int n){
    if(n==0) v.push_back(1);
    else if(n==1) v.push_back(2);
    else if(n==2) v.push_back(3);
    else v.push_back((v[n-1]+v[n-2]+v[n-3])%M+1);
}

int main(){
    int t,Case=0;
    scanf("%d",&t);
    while(t--){
        int n,m,k,i,MIN=MAX;
        scanf("%d %d %d",&n,&m,&k);
        M=m;
        unordered_map<int,int>recorded;
        queue<int>q;
        printf("Case %d: ",++Case);

        for(int i=0;i<n;i++){
            take(i);
            q.push(v[i]);
            if(v[i]<=k) recorded[v[i]]++;

            while((!q.empty() && q.front()>k) || (q.front()<=k && recorded[q.front()]>1)){
                if(q.front()<=k) recorded[q.front()]--;
                q.pop();
            }

            if(recorded.size()==k){
                int hold=q.size();
                MIN=min(MIN,hold);
            }
        }

        if(MIN==MAX) printf("sequence nai\n");

        else printf("%d\n",MIN);
        v.clear();
    }
    return 0;
}
