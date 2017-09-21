#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
    if(b.size()>a.size()){
        string temp=b;
        b=a;
        a=temp;
    }
    int carry=0,hold,i,j;
    string ans,c;
    for(i=b.size()-1,j=a.size()-1;i>-1;j--,i--){
        hold=(a[j]-'0')+(b[i]-'0')+carry;
        carry=hold/10;
        hold%=10;
        a[j]='0'+hold;
    }

    if(!carry) return a;

    else{
        if(a.size()==b.size()){
            c+=carry+'0';
            a.insert(0,c);
            c.clear();
            return a;
        }

        else{
            while(carry && j!=-1){
                hold=(a[j]-'0')+carry;
                carry=hold/10;
                hold%=10;
                a[j]='0'+hold;
                j--;
            }
            if(!carry) return a;

            else{
                c+=carry+'0';
                a.insert(0,c);
                c.clear();
                return a;
            }
        }
    }
}

string multiply(string s1, string s2){
    if(s1.size()<s2.size()){
        string temp=s1;
        s1=s2;
        s2=temp;
    }
    string mul,temp,sum="0";
    int hold,carry,i,j,count;
    char c;
    for(i=s2.size()-1,count=0;i>-1;count++,i--){
        carry=0,c='0';
        for(j=s1.size()-1;j>-1;j--){
            hold=(s1[j]-'0')*(s2[i]-'0')+(c-'0');
            carry=hold/10;
            c=carry+'0';
            hold%=10;
            temp+=(hold+'0');
        }
        if(carry) temp+=(carry+'0');
        reverse(temp.begin(),temp.end());
        for(int z=1;z<=count;z++)
            temp+='0';
        mul=add(mul,temp);
        temp.clear();
    }
    return mul;
}

int main(){
    map<int,string>factorial_of;
    factorial_of[1]="1";
    string temp="1";
    for(int i=2;i<=1000;i++){
        temp=add(temp,"1");
        factorial_of[i]=multiply(factorial_of[i-1],temp);
    }
    int n;
    while(scanf("%d",&n)==1){
        printf("%d!\n",n);
        if(!n) printf("1\n");
        else cout<<factorial_of[n]<<endl;
    }
    return 0;
}
