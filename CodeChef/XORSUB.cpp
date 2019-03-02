#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        long long k;
        cin>>n>>k;

        long long data[n];

        for(int i=0; i<n; i++)
            cin>>data[i];

        for(int row=0, col=63; row<n && col>=0; col--){
            int pivot=row;

            for(int i=row; i<n; i++)
                if((data[i]>>col) & 1)
                    pivot=i;

            swap(data[row], data[pivot]);

            if(!((data[row]>>col) & 1))
                continue;

            for(int i=row+1; i<n; i++)
                if((data[i]>>col) & 1)
                    data[i]^=data[row];

            row++;
        }

        long long ans = k;

        for(int i=0; i<n; i++)
            if((ans^data[i]) > ans)
                ans^=data[i];

        cout<<ans<<endl;
    }

    return 0;
}

