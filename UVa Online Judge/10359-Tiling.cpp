#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
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
            c+=a;
            return c;
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
                c+=a;
                return c;
            }
        }
    }
}

int main(){
    vector<string>fib;
    fib.push_back("1"),fib.push_back("2");
    string hold;
    for(int i=2;i<=250;i++){
        hold=add(fib[i-1],fib[i-2]);
        fib.push_back(hold);
    }
    int n;

    while(scanf("%d",&n)==1){
        cout<<fib[n]<<endl;
    }

    return 0;
}
