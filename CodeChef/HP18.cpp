#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, a, b;

        cin>>n>>a>>b;

        int data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        int lcm = (a*b)/__gcd(a, b);
        int ma = 0, mb = 0, mab = 0;

        for(int i=0; i<n; i++){
            if(data[i]%lcm==0)
                mab++;

            if(data[i]%a==0)
                ma++;

            if(data[i]%b==0)
                mb++;
        }

        ma-=mab, mb-=mab;

        if(mab) ma++;

        if(ma > mb)
            cout<<"BOB\n";
        else
            cout<<"ALICE\n";
    }

    return 0;
}

