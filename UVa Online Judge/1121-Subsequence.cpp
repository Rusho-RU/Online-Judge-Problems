#include <bits/stdc++.h>
using namespace std;

#define MAX 0x3f3f3f3f
#define FasterIO ios_base::sync_with_stdio(false);cin.tie(NULL)
int main(){
    int n,s;
    while(cin>>n>>s){
        int value,m=MAX;
        long long sum=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            scanf("%d",&value);
            q.push(value);
            sum+=value;
            while(!q.empty() && sum-q.front()>=s){
                sum-=q.front();
                q.pop();
                int hold=q.size();
                m=min(m,hold);
            }
        }
        if(m==MAX) m=0;
        cout<<m<<endl;
    }
    return 0;
}
