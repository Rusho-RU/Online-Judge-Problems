#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    int data[3];

    while(cin>>data[0]>>data[1]>>data[2]){
        sort(data, data+3);

        int ans = 0;

        if(data[0]+data[1]<=data[2])
            ans = data[2]-data[1]-data[0]+1;

        cout<<ans<<endl;
    }

    return 0;
}
