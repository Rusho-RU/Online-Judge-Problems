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

string Reverse(string s){
    while(s[s.size()-1]=='0'){
        s.erase(s.begin()+s.size()-1);
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        s1=Reverse(s1),s2=Reverse(s2);
        string sum=add(s1,s2);
        cout<<Reverse(sum)<<endl;
    }
    return 0;
}
