#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define MAX 200001

int main(){
    FasterIO;

    int q;

    while(cin>>q){
        char ch;
        int value;
        bool wasBefore[MAX];
        int index[MAX];
        memset(wasBefore, false, sizeof wasBefore);

        vector<int>vLeft, vRight;

        for(int i=0; i<q; i++){
            cin>>ch>>value;
            int ans;

            if(ch=='L'){
                vLeft.push_back(value);
                index[value] = vLeft.size();
            }

            else if(ch=='R'){
                wasBefore[value] = true;
                vRight.push_back(value);
                index[value] = vRight.size();
            }

            else{
                if(!wasBefore[value]){
                    ans = min(vLeft.size() - index[value], vRight.size() + index[value]-1);
                }

                else{
                    ans = min(vRight.size() - index[value], vLeft.size() + index[value]-1);
                }

                cout<<ans<<endl;
            }
        }
    }

    return 0;
}
