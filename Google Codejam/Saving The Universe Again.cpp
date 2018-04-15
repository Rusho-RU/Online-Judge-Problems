#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, Case=0;
    cin>>t;

    int pow2[31];
    pow2[0] = 1;

    for(int i=1; i<31; i++)
        pow2[i] = pow2[i-1] * 2;

    while(t--){
        int target;
        string s;
        int m = 1;

        cin>>target>>s;

        int damage = 0, countS = 0;
        queue<int>q;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='C')
                m*=2;
            else{
                damage+=m;
                countS++;
                q.push(i);
            }
        }

        cout<<"Case #"<<++Case<<": ";

        if(damage==0 || damage <= target){
            cout<<"0"<<endl;
            continue;
        }

        if(target < countS){
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }

        int lastS = -1, steps=0;
        if(q.front()==0)
            lastS=0, q.pop();

        while(!q.empty()){
            int change = q.front()-lastS-1;
            damage-=pow2[change]-1;
            steps+=change;

            if(damage<=target)
                break;

            lastS++;
            q.pop();
        }

        if(damage<target){
            int diff = target - damage;
            steps-=(diff/2) + diff%2;
        }

        cout<<steps<<endl;
    }

    return 0;
}
