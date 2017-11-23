#include <bits/stdc++.h>
using namespace std;

vector<string>s;

int decide(int x, int y, char s){
    if(s=='-')
        return x-y;
    return x+y;
}

void calculate(){
    string sign = "+++";

    for(int i=1; i<=4; i++){
        do{
            s.push_back(sign);
        }while(next_permutation(sign.begin(), sign.end()));

        for(int j=2, k=0;k<i; k++,j--)
            sign[j] = '-';
    }
}

int main(){
    calculate();
    string num;

    while(cin>>num){
        string ans;
        for(int i=0; i<s.size(); i++){
            int sum = num[0]-'0';

            for(int j=0; j<3; j++){
                sum = decide(sum, num[j+1]-'0', s[i][j]);
            }

            if(sum == 7)
                ans = s[i];
        }

        for(int i=0; i<3; i++)
            printf("%c%c",num[i],ans[i]);
        printf("%c=7\n",num[3]);
    }

    return 0;
}
