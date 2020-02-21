#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int cnt(int num){
	if(num==2 || num==3 || num==5)
		return 5;
	if(num==0 || num==6 || num==9)
		return 6;
	if(num==1)
		return 2;
	if(num==4)
		return 4;
	if(num==7)
		return 3;
	return 7;
}

int main(){
    FasterIO;

    int a, b, t;

    cin>>t;

    while(t--){
        cin>>a>>b;

        int c = a+b;
        int ans = 0;

        while(c){
            ans+=cnt(c%10);
            c/=10;
        }

        cout<<ans<<endl;
    }

    return 0;
}

