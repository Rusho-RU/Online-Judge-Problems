#include <bits/stdc++.h>
using namespace std;

void toLowerCase(string& s){
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i] + ('a' - 'A');
    }

    return;
}

int main(){
    string s;

    while(getline(cin, s)){
        toLowerCase(s);

        if(s=="roraima" || s=="acre" || s=="amapa" || s=="amazonas" || s=="para" ||
           s=="rondonia" || s=="tocantins")
            cout<<"Regiao Norte"<<endl;
        else
            cout<<"Outra regiao"<<endl;
    }

    return 0;
}
