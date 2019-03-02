#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int data[k];

        int cnt = 0;

        for(int i=0; i<k; i++){
            cin>>data[i];
            if(data[i]&1){
                cnt++;
            }
        }

        if(n&1){
            if(cnt&1){
                cout<<"odd\n";
            }
            else{
                cout<<"even\n";
            }
        }

        else{
            if(data[k-1]&1){
                cout<<"odd\n";
            }
            else{
                cout<<"even\n";
            }
        }
    }

    return 0;
}
