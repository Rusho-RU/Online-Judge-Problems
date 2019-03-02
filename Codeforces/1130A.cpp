#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int data[n];

        int a=0, b=0;

        for(int i=0; i<n; i++){
            cin>>data[i];
            if(data[i]>0)
                a++;
            if(data[i]<0)
                b++;
        }

        if(a>=(n+1)/2)
            cout<<"1\n";
        else if(b>=(n+1)/2)
            cout<<"-1\n";
        else
            cout<<"0\n";
    }

    return 0;
}

