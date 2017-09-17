#include <bits/stdc++.h>
using namespace std;

int p2[32], p16[9];
map<char,int>ara,digit;
map<int,char>digitr;

void calculate(){
    ara['b']=2, ara['d']=10, ara['h']=16;
    p2[0]=p16[0]=1;

    for(int i=1;i<32;i++)
        p2[i]=p2[i-1]*2;

    for(int i=1;i<9;i++)
        p16[i]=p16[i-1]*16;

    for(char c='0';c<='9';c++)
        digit[c]=c-'0', digitr[c-'0']=c;
    for(char c='a', i=10 ;c<='f' ; c++, i++)
        digit[c]=i, digitr[i]=c;
}

int decimal(string n, int base){
    int ans=0;
    if(base==2)
        for(int i=n.size()-1,j=0;i>=0;j++,i--)
            ans+=digit[n[i]]*p2[j];

    else if(base==16)
        for(int i=n.size()-1,j=0;i>=0;j++,i--)
            ans+=digit[n[i]]*p16[j];
    else
        for(int i=0;i<n.size();i++)
            ans=ans*10+digit[n[i]];

    return ans;
}

void hexa(int n){
    string ans;

    while(n){
        ans+=digitr[n%16];
        n/=16;
    }

    reverse(ans.begin(),ans.end());

    if(ans.empty()) cout<<'0';
    else cout<<ans;

    cout<<" "<<"hex"<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    calculate();
    int t, Case=0;
    cin>>t;

    while(t--){
        string s,b;
        cin>>s>>b;
        int num=decimal(s,ara[b[0]]);

        cout<<"Case "<<++Case<<":"<<endl;

        if(b[0]!='d')
            cout<<num<<" "<<"dec"<<endl;
        if(b[0]!='h')
            hexa(num);
        if(b[0]!='b'){
            bitset<32>bin=num;
            int i;
            for(i=31;i>=0;i--)
                if(bin[i]) break;

            if(i<0) cout<<'0';

            for(;i>=0;i--)
                if(bin[i]) cout<<'1';
                else cout<<'0';
            cout<<" "<<"bin"<<endl;
        }

        cout<<endl;
    }

    return 0;
}
