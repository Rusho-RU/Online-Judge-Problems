#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
    if(a.size()<b.size()){
        string temp=a;
        a=b;
        b=temp;
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

int main(){
    map<int,string>fib;
    fib[0]="0",fib[1]="1",fib[2]="1";
    for(int i=3;i<=9000;i++)
        fib[i]=add(fib[i-1],fib[i-2]);

    int n;
    while(scanf("%d",&n)==1){
        string a="0",b="1";
        cout<<"The Fibonacci number for "<<n<<" is "<<fib[n]<<endl;
    }
    return 0;
}
