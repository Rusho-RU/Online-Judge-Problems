#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int h, w;

    while(cin>>w>>h){
        int u1, d1, u2, d2;
        cin>>u1>>d1>>u2>>d2;

        for(int i=h; i>0; i--){
            w+=i;
            if(i==d1)
                w-=u1;
            else if(i==d2)
                w-=u2;

            w = max(0, w);
        }

        cout<<w<<endl;
    }

    return 0;
}

