#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 500000

int check(const string& s){
    stack<char>stck;
    int retL = 0, retR=0;

    int i;

    for(i=0; i<s.size(); i++){
        if(s[i]=='(')
            stck.push('('), retL++;

        else if(stck.empty()){
            retR++;
            continue;
        }

        else if(s[i]==')')
            stck.pop(), retL--;
    }

    if(retL && retR) return 10000000;
    if(retR) return retR;
    return -retL;
}

int main(){
    FasterIO;

    int n;

    while(cin>>n){
        int rating[n];
        string s[n];
        int zero = 0, cnt=0;

        for(int i=0; i<n; i++){
            cin>>s[i];
            rating[i] = check(s[i]);
        }

        sort(rating, rating+n);

        int i=0, j=n-1;

        while(i<n &&rating[i++]<0);

        while(j>=0 && rating[j--]>0);

        i-=2, j+=2;

        zero = j-i-1;

        while(i>=0 && j<n){
            if(rating[i]+rating[j] > 0)
                i--;
            else if(rating[i]+rating[j]<0)
                j++;
            else
                cnt++, i--, j++;
        }

        cnt+=zero/2;

        cout<<cnt<<endl;
    }

    return 0;
}

