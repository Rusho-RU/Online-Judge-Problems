#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int w1, h1, w2, h2;

    while(cin>>w1>>h1>>w2>>h2){
        cout<<(2*(h1+h2)+2*w1+4)<<endl;
    }

    return 0;
}

