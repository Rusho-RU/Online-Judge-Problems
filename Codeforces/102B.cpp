#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int digit_sum(int n){
    int sum = 0;

    while(n){
        sum+=n%10;
        n/=10;
    }

    return sum;
}

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        if(s.size()==1){
            cout<<"0\n";
            continue;
        }

        int sum = 0, cnt=1;

        for(int i=0; i<s.size(); i++)
            sum += s[i] - '0';

        while(sum/10){
            sum = digit_sum(sum);
            cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}

