#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int next_move(int pre){

}

int main(){
    FasterIO;

    int n, m;

    while(cin>>n>>m){
        int data[2*n];
        int next[2*n];
        bool isAvailable[2*n];

        memset(isAvailable, true, sizeof isAvailable);

        for(int i=0; i<2*n; i++){
            cin>>data[i];
            next[data[i]] = data[i];
        }

        while(m--){
            int a, b;
            cin>>a>>b;
            next[a] = b;
            next[b] = a;
        }

        int t, mov=-1;
        cin>>t;

        if(t==1){
            cin>>mov;
            next_move(mov);
            n--
        }

        while(n--){
            next_move()
        }
    }

    return 0;
}

