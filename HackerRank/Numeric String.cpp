#include <bits/stdc++.h>
using namespace std;

int m,b;

int calculate(string s){

}

int main(){
    string s;
    while(cin>>s){
        int k;
        cin>>k>>m>>b;
        int l=s.size()-k+1,ans=0;
        for(int i=0;i<l;i++){
            string s1(s,i,k);
            ans+=calculate(s1);
        }
    }
}
