#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 110

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int matrix[n+1][n+1];

        for(int k=1, num=1; k<=n; k++){
            int i = 1, j = k;

            while(j>=1){
                matrix[i++][j--] = num++;
            }
        }

        for(int k = n, num = n*n; k>1; k--){
            int i = n, j = k;

            while(j<=n)
                matrix[i--][j++] = num--;
        }

        for(int i=1; i<=n; i++){
            cout<<matrix[i][1];
            for(int j=2; j<=n; j++){
                cout<<" "<<matrix[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
