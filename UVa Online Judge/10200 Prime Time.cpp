#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
#define MAX 10000*10000+10000+41+10



bool check(int n){
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}

int main(){
    FasterIO;

    int a, b;

    while(cin>>a>>b){
        int cnt=0;

        for(int i=a; i<=b; i++){
            int n = i*i + i + 41;
            if(check(n))
                cnt++;
        }

        cout<<fixed<<setprecision(2)<<(double)1.0*cnt*100/(b-a+1)<<endl;
    }

    return 0;
}

