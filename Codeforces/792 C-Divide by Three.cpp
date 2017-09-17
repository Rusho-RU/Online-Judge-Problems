#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int main(){
    string s;
    char c;
    int sum=0;
    map<char,int>m;
    while(1){
        scanf("%c",&c);
        if(c=='\n') break;
        s+=c;
        m[c]++;
        sum+=(c-'0');
    }
    int hold=sum%3;
    if(hold==0)
        cout<<s<<endl;
    else{
        while(hold && !s.empty()){
            char i;
            if(hold==2){
                for(i='2';i<='9';i+=3){
                    if(m[i])
                        break;
                }
                if(i<='9'){
                    int ind=s.find(i);
                    s.erase(s.begin()+ind);
                    m[i]--;
                    sum-=i-'0';
                    hold=sum%3;
                }
                else hold=1;
            }

            if(hold==1){
                for(i='1';i<='9';i+=3){
                    if(m[i])
                        break;
                }
                if(i<='9'){
                    int ind=s.find(i);
                    s.erase(s.begin()+ind);
                    m[i]--;
                    sum-=i-'0';
                    hold=sum%3;
                }
                else{
                    s.clear();
                    break;
                }
            }
        }
        bool zero=false;
        for(int i=0;;)
            if(s[i]=='0')
                s.erase(s.begin()+i),zero=true;
            else break;
        if(s.empty() && !zero) printf("-1\n");
        else if(sum==0) printf("0\n");
        else cout<<s<<endl;
    }
    return 0;
}
