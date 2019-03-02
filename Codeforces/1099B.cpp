#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 10000000

int ans[MAX];

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int hold = sqrt(n);

        if(hold*hold==n || (hold+1)*(hold+1)==n);

        else
            hold++;

        if(n < (hold*hold-hold+1))
            cout<<4+2*(hold-2)-1<<endl;
        else
            cout<<4+2*(hold-2)<<endl;
    }

    return 0;
}
