#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>v1(n), v2;

        for(int i=0; i<n; i++){
            cin>>v1[i];
        }

        sort(all(v1));

        long long num = v1[0]*v1[n-1];

        for(long long i=2; i*i<=num; i++){
            if(num%i==0){
                v2.push_back(i);
                if(i!=num/i)
                    v2.push_back(num/i);
            }
        }

        sort(all(v2));

        if(v1==v2)
            cout<<num<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}

