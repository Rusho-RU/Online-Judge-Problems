#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int start, stop;
long long mx;

void Kadane(long long data[],int s, int e){
    long long max_so_far = LLONG_MIN, max_ending_here = 0LL;
    start = 0, stop = 0;
    int now = 0;

    for(int i=s; i<e; i++){
        max_ending_here += data[i];
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
            start = now;
            stop = i;
        }

        if(max_ending_here < 0){
            max_ending_here = 0LL;
            now = i+1;
        }
    }

    mx = max_so_far;

    return;
}

int main(){
    FasterIO;

    int n, x;

    while(cin>>n>>x){
        long long data[n], hold[n];

        for(int i=0; i<n; i++){
            cin>>data[i];
            hold[i] = data[i];
        }

        Kadane(data, 0, n);

        if(x>0){
            if(mx>0)
                for(int i=start; i<=stop; i++)
                    data[i]*=x;
            Kadane(data, 0, n);
            cout<<max(0LL, mx)<<endl;
        }

        else{
            long long h = mx;
            for(int i=start; i<=stop; i++)
                hold[i]*=-1LL;

            int s = start, e = stop;
            Kadane(hold, start, stop);

            long long ans = h;

            ans = max(ans, h+mx*x);
            long long sum=0;

            for(int i=s-1; i>=0; i--){
                sum+=data[i];
                ans = max(ans, h+sum*x);
            }

            sum=0;
            for(int i=e+1; i<n; i++){
                sum+=data[i];
                ans = max(ans, h+sum*x);
            }

            cout<<max(0LL, mx)<<endl;
        }
    }

    return 0;
}

