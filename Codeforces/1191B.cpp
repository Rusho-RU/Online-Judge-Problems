#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(), v.end()
const int MOD = 1e9+7;

int main(){
    FasterIO;

    int a[3];

    for(int i=0; i<3; i++){
        string s;
        cin>>s;

        a[i] = (s[1]-'a')*10 + s[0]-'0';
    }

    sort(a, a+3);

    int d1 = a[1]-a[0], d2 = a[2]-a[1];

    if(d1==d2 && (d1==0 || d1==1))
        cout<<0<<endl;

    else if(d1==0 || d1==1 || d1==2 || d2==0 || d2==1 || d2==2)
        cout<<1<<endl;

    else
        cout<<2<<endl;

    return 0;
}

