#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int a;

void print(int n){
    for(int i=0; i<n;i++)
        cout<<"*";
}

int main(){
    FasterIO;

    string s;

    while(cin>>s){
        int sz = s.size();

        int row = sz/20;

        if(sz%20) row++;

        int col = sz/row;
        if(sz%row)
            col++;

        a = col*row - sz;
        int data[row];
        int ex = a%row;
        a/=col;

        for(int i=row-1; i>=0; i--){
            data[i] = a;
        }

        for(int i=row-1; i>=0; i--){
            if(ex)
                data[i]++, ex--;
        }

        cout<<row<<" "<<col<<endl;

        for(int i=0, k=0; i<row; i++){
            print(data[i]);
            for(int j=data[i]; j<col; j++, k++){
                cout<<s[k];
            }

            cout<<endl;
        }
    }

    return 0;
}

