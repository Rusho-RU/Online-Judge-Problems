#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int data[1050];

int check(int n, int t){
    int cnt = 0;

    for(int i=0; i<n; i++){
        int hold = abs(data[i]-t);
        if(hold)
            hold--;
        cnt+=hold;
    }

    return cnt;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        for(int i=0; i<n; i++){
            cin>>data[i];
        }

        int mn = INT_MAX, t = 0;

        for(int i=1; i<=110; i++){
            int cnt = check(n, i);

            if(cnt<mn){
                t = i;
                mn = cnt;
            }
        }

        cout<<t<<" "<<mn<<endl;
    }

    return 0;
}
