#include <bits/stdc++.h>
using namespace std;

int base[16],p8[7],p16[7],p10[7],num;

void calcu(){
    p8[0]=p16[0]=p10[0]=1;
    for(int i=1;i<7;i++)
        p8[i]=p8[i-1]*8, p16[i]=p16[i-1]*16, p10[i]=p10[i-1]*10;
    return;
}

int hexa(string s){
    int sum=0;

    for(int i=s.size()-1,j=0;i>1;i--,j++)
        if(isalpha(s[i]))
            sum+=s[i]%55 * p16[j];
        else
            sum+= (s[i]-'0') * p16[j];

    return sum;
}

int octal(string s){
    int sum=0;

    for(int i=s.size()-1,j=0;i>0;i--,j++)
        sum+=((s[i]-'0')*p8[j]);

    return sum;
}

int dec(string s){
    int sum=0;

    for(int i=s.size()-1,j=0;i>=0;i--,j++)
        sum+=((s[i]-'0')*p10[j]);

    return sum;
}

int convert(string s){
    if(s[0]=='0' && s[1]=='x') return hexa(s);
    else if(s[0]=='0') return octal(s);
    else return dec(s);
}

int ans(string s){
    if(s=="i++") return num++;
    if(s=="++i") return ++num;
    if(s=="i--") return num--;
    if(s=="--i") return --num;
    if(s=="i") return num;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string snum;
    int n;
    calcu();

    while(cin>>snum>>n && snum!="0" && n){
        string s;
        int a,c=0;
        num=convert(snum);

        for(int i=0;i<n;i++){
            cin>>s>>a;
            if(ans(s)==a) c++;
            else{
                if(s=="i++") num=a+1;
                else if(s=="i--") num=a-1;
                else num=a;
            }
        }

        cout<<c<<endl;
    }
    return 0;
}
