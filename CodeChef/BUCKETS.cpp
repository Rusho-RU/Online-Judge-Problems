#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n, k;

    while(cin>>n>>k){
        int ball[n][k], total[k];

        fill_n(total, k, 0);

        for(int i=0; i<n; i++){
            for(int j=0; j<k; j++){
                cin>>ball[i][j];
            }
        }

        for(int j=0; j<k; j++){
            for(int i=0; i<n; i++){
                total[j]+=ball[i][j];
            }
        }

        int last = 0, last_er_aage = 0;

        for(int i=0; i<k; i++){
            last+=ball[n-1][i];
            last_er_aage+=total[i] - ball[n-1][i];
        }

        for(int i=0; i<k; i++){
            double p = 1;
            int a = total[i] - ball[n-1][i], b = ball[n-1][i];

            if(total[i]==0)
                p=0;
            else{
                if(a){
                    p = p * (1.0*a/last_er_aage);
                    p = p * (1.0*(b+1)/(last+1));
                }

                else{
                    p = p * (1.0*b/(last+1));
                }
            }

            cout<<setprecision(10)<<p;

            if(i==k-1)
                cout<<endl;
            else
                cout<<" ";
        }
    }

    return 0;
}

