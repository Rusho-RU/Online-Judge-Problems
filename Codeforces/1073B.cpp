#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 200050

int main(){
    FasterIO;
    int n;

    while(cin>>n){
        bool inBag[MAX];

        memset(inBag, false, sizeof inBag);

        queue<int>q;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            q.push(a);
        }

        for(int i=0; i<n; i++){
            int b;
            cin>>b;

            if(inBag[b])
                cout<<0;
            else{
                int cnt=1;
                while(q.front()!=b){
                    inBag[q.front()] = true;
                    q.pop();
                    cnt++;
                }
                q.pop();
                cout<<cnt;
            }

            if(i==n-1)
                cout<<endl;
            else
                cout<<" ";
        }
    }

    return 0;
}
