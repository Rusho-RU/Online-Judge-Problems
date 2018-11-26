#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, a;

    while(cin>>n>>a){
        int hasCriminal[n];

        for(int i=0; i<n; i++)
            cin>>hasCriminal[i];

        int l = a-2, r = a, cnt = hasCriminal[a-1];

        while(l>=0 && r<n){
            if(hasCriminal[l] && hasCriminal[r])
                cnt+=2;
             l--, r++;
        }
        while(l>=0)
            if(hasCriminal[l--])
                cnt++;

        while(r<n)
            if(hasCriminal[r++])
                cnt++;

        cout<<cnt<<endl;
    }

    return 0;
}

