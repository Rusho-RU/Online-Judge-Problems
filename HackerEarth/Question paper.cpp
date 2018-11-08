#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define MAX 200050
#define ADD 100010

int main(){
    FasterIO;
    int t;
    cin>>t;

    bool mark[MAX];

    while(t--){
        int n, a, b;
        memset(mark, false, sizeof mark);

        cin>>n>>a>>b;
        b = -b;

        int limit = (n/2)+1;

        for(int i=0; i<limit; i++){
            mark[i*a + (n-i)*b + ADD] = true;
            cout<<(i*a + (n-i)*b)<<" "<<(i*b + (n-i)*a)<<endl;
            cout<<i<<" "<<(n-i)<<endl;

            mark[i*b + (n-i)*a + ADD] = true;
        }

        int cnt = 0;

        for(int i=0; i<MAX; i++)
            if(mark[i])
                cnt++;

        cout<<cnt<<endl;
    }

    return 0;
}
