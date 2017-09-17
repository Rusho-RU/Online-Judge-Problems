#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(){
    string s;
    while(cin>>s){
        long long num=0,count=0;
        for(int i=s.size()-1,j=0;i>=0;j++,i--){
            if(s[i]=='a'){
                count+=(num+j)%MOD;
                num=((num+j)%MOD*2)%MOD;
                j=-1;
            }
        }
        printf("%I64d\n",count%MOD);
    }
    return 0;
}
