#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    bool done=false;
    while(cin>>s){
        if(done) cout<<endl;
        else done=true;

        int rem4=0, rem100=0, rem15=0, rem55=0, rem400=0;
        for(int i=0;i<s.size();i++){
            int h=s[i]-'0';
            rem4=(rem4*10+h)%4;
            rem15=(rem15*10+h)%15;
            rem55=(rem55*10+h)%55;
            rem100=(rem100*10+h)%100;
            rem400=(rem400*10+h)%400;
        }

        bool leap=false, festive=false;

        if((!rem4 && rem100) || !rem400){
            cout<<"This is leap year."<<endl;
            leap=festive=true;
        }

        if(!rem15){
            cout<<"This is huluculu festival year."<<endl;
            festive=true;
        }

        if(leap && !rem55){
            cout<<"This is bulukulu festival year."<<endl;
            festive=true;
        }

        if(!festive)
            cout<<"This is an ordinary year."<<endl;
    }

    return 0;
}
