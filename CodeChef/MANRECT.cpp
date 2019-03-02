#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 1000000000

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int imax, imin, jmax, jmin, correctness;

        imax = jmax = INT_MIN;
        imin = jmin = INT_MAX;

        int lo = 0, hi = MAX, d1, d2, mid;

        while(lo<hi){
            mid = (lo+hi)/2;
            cout<<"Q 0 "<<mid-1<<endl;
            fflush(stdout);
            cin>>d1;

            cout<<"Q 0 "<<mid<<endl;
            fflush(stdout);
            cin>>d2;

            if(d1==d2)
                break;
            else if(d1>d2)
                lo = mid;
            else
                hi = mid;
        }

        imin = d1;

        int dist;

        cout<<"Q 0 0"<<endl;
        fflush(stdout);
        cin>>dist;

        jmin = dist-imin;

        cout<<"Q "<<0<<" "<<MAX<<endl;
        fflush(stdout);
        cin>>dist;

        jmax = MAX - (dist-imin);

        cout<<"Q "<<MAX<<" "<<0<<endl;
        fflush(stdout);
        cin>>dist;

        imax = MAX-(dist-jmin);

        cout<<"A "<<imin<<" "<<jmin<<" "<<imax<<" "<<jmax<<endl;
        fflush(stdout);

        cin>>correctness;
        if(correctness==-1)
            break;
    }

    return 0;
}

