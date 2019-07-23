#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    char vowel[5][5] = {{'a', 'e', 'i', 'o', 'u'},
                        {'e', 'i', 'o', 'u', 'a'},
                        {'i', 'o', 'u', 'a', 'e'},
                        {'o', 'u', 'a', 'e', 'i'},
                        {'u', 'a', 'e', 'i', 'o'}};

    int k;
    while(cin>>k){
        if(k<25){
            cout<<"-1"<<endl;
            continue;
        }

        int r = 5;
        int sqr = sqrt(k);

        while(r<=sqr && k%r!=0)
            r++;

        if(r==sqr+1){
            cout<<"-1"<<endl;
            continue;
        }

        int c = k/r;

        string s;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                s+=vowel[i%5][j%5];
            }
        }
        cout<<s<<endl;
    }

    return 0;
}

