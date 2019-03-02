#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int q;
    cin>>q;

    while(q--){
        int a, ans = 1;
        cin>>a;

        int hold = a;
        int bit = 0;

        while(hold){
            hold>>=1;
            bit++;
        }

        ans<<=bit;
        ans--;

        if(ans==a){
            if(bit==9) ans = 73;

            else if(bit==11) ans = 89;

            else if(bit==15) ans = 4681;

            else if(bit==21) ans = 299593;

            else if(bit==23) ans = 178481;

            else if(bit==25) ans = 1082401;

            else{
                ans = 1;
                if(bit%2==0){
                    for(int i=1; i<bit-1; i++){
                        ans<<=1;
                        if(i%2==0)
                            ans++;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
