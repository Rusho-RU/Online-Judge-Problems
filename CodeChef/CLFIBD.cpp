#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int data[26] = {};

        for(int i=0; i<s.size(); i++){
            data[s[i]-'a']++;
        }

        sort(data, data+26);

        int i;
        bool dynamic = true;

        for(i=0; i<26; i++)
            if(data[i])
                break;

        int index = i;

        for(int i=index+2;i<26; i++){
            if(data[i-1] + data[i-2] != data[i]){
                dynamic = false;
                break;
            }
            else dynamic = true;
        }

        swap(data[index], data[index+1]);
        for(int i=index+2;i<26; i++){
            if(data[i-1] + data[i-2] != data[i]){
                dynamic = false;
                break;
            }
            else dynamic = true;
        }

        if(dynamic)
            puts("Dynamic");
        else{
            dynamic = true;
            swap(data[index], data[index+1]);

            for(int i=index+2;i<26; i++){
                if(data[i-1] + data[i-2] != data[i]){
                    dynamic = false;
                    break;
                }
            }

            if(dynamic)
                puts("Dynamic");
            else
                puts("Not");
        }
    }

    return 0;
}
