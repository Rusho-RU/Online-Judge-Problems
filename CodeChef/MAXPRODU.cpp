#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MOD 1000000007

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int mid = n/k;
        int data[k];

        int left, right;

        right = k/2;

        if(!(k&1)){

        }

        for(int i=0; i<k; i++)
            printf("%d ", data[i]);
        cout<<endl;
    }
}
