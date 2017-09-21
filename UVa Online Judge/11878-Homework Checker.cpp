#include <bits/stdc++.h>
using namespace std;

int ctoi(string s){
    int num=0,i;
    if(s[0]=='-') i=1;
    else i=0;
    for(;i<s.size();i++){
        num=num*10+(s[i]-'0');
    }
    if(s[0]=='-') num=-num;
    return num;
}

int main(){
    char sign;
    int a,b,count=0;
    char s[10];
    while(scanf("%d%c%d=%s",&a,&sign,&b,s)==4){
        if(s[0]=='?') continue;
        string n=s;
        int num=ctoi(n);
        if(sign=='-' && a-b==num) count++;
        else if(sign=='+' && a+b==num) count++;
    }
    printf("%d\n",count);
    return 0;
}
