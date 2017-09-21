#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        int m=n[n.size()-1]-'0';

        if(n=="0")
            puts("1");
        else if(n=="1")
            puts("66");
        else if(m%5==1)
            puts("16");
        else if(m%5==2)
            puts("56");
        else if(m%5==3)
            puts("96");
        else if(m%5==4)
            puts("36");
        else if(m%5==0)
            puts("76");
    }

    return 0;
}
