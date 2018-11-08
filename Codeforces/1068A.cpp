#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    long long n, bondhu, ache, vinno;

    while(cin>>n>>bondhu>>ache>>vinno){
        long long wtf = vinno+ache;
        long long dite_parbe = wtf/bondhu;
        if(wtf%bondhu)
            dite_parbe++;

        if(dite_parbe*bondhu > n){
            cout<<"-1\n";
            continue;
        }

        cout<<dite_parbe<<endl;
    }

    return 0;
}
