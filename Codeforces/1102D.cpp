#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
    FasterIO;

    int n;
    string s;

    while(cin>>n>>s){
        int zeros=0, ones=0, twos=0;

        for(int i=0; i<n; i++){
            if(s[i]=='2')
                twos++;
            else if(s[i]=='1')
                ones++;
            else if(s[i]=='0')
                zeros++;
        }

        zeros-=n/3, ones-=n/3, twos-=n/3;

        if(zeros<0){
            for(int i=0; i<n; i++){
                if(s[i]=='2' && twos>0)
                    zeros++, s[i]='0', twos--;

                else if(s[i]=='1' && ones>0)
                    zeros++, s[i]='0', ones--;

                if(zeros==0) break;
            }
        }


        if(twos<0){
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0' && zeros>0)
                    twos++, s[i]='2', zeros--;

                else if(s[i]=='1' && ones>0)
                    twos++, s[i]='2', ones--;

                if(twos==0) break;
            }
        }

        if(ones<0){
            for(int i=0; i<n; i++) {
                if(s[i]=='2' && twos>0)
                    ones++, s[i]='1', twos--;

                if(ones==0) break;
            }

            for(int i=n-1; i>=0; i--){
                if(ones==0) break;
                if(s[i]=='0' && zeros>0)
                    zeros--, s[i]='1', ones++;

            }
        }

        cout<<s<<endl;
    }

    return 0;
}
