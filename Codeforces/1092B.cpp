#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;
    while(cin>>n){
        int skill[n];

        for(int i=0; i<n; i++)
            cin>>skill[i];

        sort(skill, skill+n);

        int dorkar = 0;

        for(int i=0; i<n; i+=2)
            dorkar += skill[i+1] - skill[i];

        cout<<dorkar<<endl;
    }

    return 0;
}

