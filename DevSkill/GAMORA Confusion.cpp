#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        if(s=="Quill")
            cout<<"I am going to ask you this one time, where is Gamora?"<<endl;
        else if(s=="Stark")
            cout<<"I will do you one better, who is Gamora?"<<endl;
        else if(s=="Drax")
            cout<<"I will do you one better, why is Gamora?"<<endl;
        else
            cout<<"What is Gamora?"<<endl;
    }

    return 0;
}
