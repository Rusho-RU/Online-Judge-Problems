#include <bits/stdc++.h>
using namespace std;

int p16[9];
map<char,int>digit;
map<int,char>digitr;

void calculate(){
    p16[0]=1;

    for(int i=1;i<9;i++)
        p16[i]=p16[i-1]*16;

    for(char c='0';c<='9';c++)
        digit[c]=c-'0', digitr[c-'0']=c;

    for(char c='a', i=10 ;c<='f' ; c++, i++)
        digit[c]=i;

    for(char c='A', i=10 ;c<='F' ; c++, i++)
        digit[c]=i, digitr[i]=c;
}

int decimal(string n){
    int ans=0;
    for(int i=n.size()-1,j=0;i>1;j++,i--)
        ans+=digit[n[i]]*p16[j];

    return ans;
}

string hexa(int n){
    string ans;

    while(n){
        ans+=digitr[n%16];
        n/=16;
    }

    reverse(ans.begin(),ans.end());

    if(ans.empty()) return "0";

    return ans;
}

int convert(string n){
    int ans=0;
    for(int i=0;i<n.size();i++)
        ans=ans*10+digit[n[i]];

    return ans;
}

int main(){
    calculate();
    string s;
    while(cin>>s && s!="-1"){
        int dec=0;

        if(s[0]=='0' && s[1]=='x')
            cout<<decimal(s)<<endl;
        else
            cout<<"0x"<<hexa(convert(s))<<endl;
    }
    return 0;
}
