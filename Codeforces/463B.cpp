#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int e = 0, hp = 0, need=0;

        for(int i=0; i<n; i++){
            int h;
            cin>>h;

            e+=hp-h;

            if(e<0)
                need-=e, e=0;

            hp = h;
        }

        cout<<need<<endl;
    }

    return 0;
}
