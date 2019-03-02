#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        if(n==1)
            cout<<"-1\n"<<endl;
        else
            cout<<n<<" "<<n<<endl;
    }

    return 0;
}

