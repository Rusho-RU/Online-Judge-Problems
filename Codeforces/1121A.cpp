#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

#define MAX 100010

int main(){
    FasterIO;

    int n, m, k;

    while(cin>>n>>m>>k){
        int a[n], b[n];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
            cin>>b[i];

        int sum=0;

        for(int i=0; i<k; i++){
            int val;
            cin>>val;

            for(int j=0; j<n; j++){
                if(j==val)
                    continue;
                if(b[val]==b[j] && )
            }
        }
    }

    return 0;
}

