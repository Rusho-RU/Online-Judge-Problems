#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int b[100][100];
int c[4][2];
char cf;

int main()
{
    cin >> n;
    for(int k=0; k<4; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> cf;
                b[i][j] = cf-'0';
            }
        }
        for(int r=0; r<2; r++){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if((i+j)%2 == 0){
                        c[k][r] += (b[i][j] != r);
                    } else {
                        c[k][r] += (b[i][j] == r);
                    }
                    //cout << i << " " << j << " " << b[i][j] << " " << c[k][0] << " " << c[k][1] << endl;
                }
            }
        }
        //cout << endl;
    }
    /*for(int i=0; i<4; i++){
        cout << c[i][0] << " " << c[i][1] << endl;
    }*/
    ll mn = INT_MAX;
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            ll la = 0;
            for(int k=0; k<4; k++){
                if(k == i || k == j) la += c[k][0];
                else la += c[k][1];
            }
            mn = min(mn, la);
        }
    }

    cout << mn << endl;

    return 0;
}
