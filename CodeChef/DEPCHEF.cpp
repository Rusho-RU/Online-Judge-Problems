#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int attack[n], defense[n];

        for(int i=0; i<n; i++)
            cin>>attack[i];

        for(int i=0; i<n; i++)
            cin>>defense[i];

        int mx = INT_MIN, l, r;
        bool dead;

        for(int i=0; i<n; i++){
            l = ((i-1)+n)%n;
            r = (i+1)%n;
            dead = false;

            if(defense[i]>attack[l]+attack[r])
                mx = max(mx, defense[i]);
        }

        cout<<max(mx, -1)<<endl;
    }

    return 0;
}

