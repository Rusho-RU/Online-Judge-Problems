#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool prime(int n){
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        n/=2;

        while(n++)
            if(prime(n/2))
                break;

        cout<<n/2+1<<endl;
    }

    return 0;
}
