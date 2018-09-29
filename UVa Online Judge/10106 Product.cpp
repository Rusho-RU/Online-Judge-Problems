#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

string sum(string x, string y){
    if(x.size() < y.size())
        swap(x, y);

    string ans = "";

    int carry = 0;

    for(int i=0; i<y.size(); i++){
        int sum = (x[i]-'0') + (y[i]-'0') + carry;
        ans.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for(int i=y.size(); i<x.size(); i++){
        int sum = (x[i]-'0') + carry;
        ans.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if(carry)
        ans.push_back(carry+'0');

    return ans;
}

string multiply(string num, char ch, int pos){
    int multiplier = ch-'0';

    string ans = "";

    for(int i=0; i<pos; i++) ans.push_back('0');

    int carry = 0;

    for(int i=0; i<num.size(); i++){
        int mul = (num[i]-'0') * multiplier + carry;
        ans.push_back(mul%10+'0');
        carry = mul/10;
    }

    if(carry)
        ans.push_back(carry+'0');

    return ans;
}

int main(){
    //freopen("output.txt", "w", stdout);
    FasterIO;

    string a,b;

    while(cin>>a>>b){
        string total = "0";

        if(a.size() < b.size())
            swap(a, b);

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for(int i=0; i<b.size(); i++){
            string temp = multiply(a, b[i], i);
            total = sum(total, temp);
        }

        reverse(total.begin(), total.end());

        int i=0;

        while(i<total.size() && total[i]=='0') i++;

        if(i==total.size())
            cout<<"0";
        else
            for(; i<total.size(); i++)
                cout<<total[i];

        cout<<endl;
    }

    return 0;
}
