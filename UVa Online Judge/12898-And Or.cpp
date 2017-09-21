#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll a,b,power[64];
    power[0]=1;
    int t,Case=0;
    scanf("%d",&t);

    for(int i=1;i<64;i++)
        power[i]=power[i-1]*2;

    while(t--){
        scanf("%lld%lld",&a,&b);
        stack<int>sa,sb;
        ll OR,AND,hold;

        hold=a;
        while(hold){
            sa.push(hold%2);
            hold/=2;
        }

        hold=b;
        while(hold){
            sb.push(hold%2);
            hold/=2;
        }

        if(sa.size()!=sb.size())
            AND=0, OR=power[sb.size()]-1;

        else{
            int s=sa.size()-1;

            while(!sa.empty() && sa.top()==sb.top()){
                s--;
                sa.pop(), sb.pop();
            }

            AND=power[s+1]-1;

            cout<<"a = "<<(bitset<16>(a))<<endl;
            cout<<"b = "<<(bitset<16>(b))<<endl;
            cout<<"AND = "<<(bitset<16>(AND))<<endl;
            cout<<"~AND = "<<(bitset<16>(~AND))<<endl;
            cout<<AND<<endl;

            OR=b|AND;
            AND=b&~AND;
        }

        printf("Case %d: %lld %lld\n",++Case,OR,AND);
    }

    return 0;
}
