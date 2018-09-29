#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main(){
    FasterIO;
    string s;

    while(getline(cin, s)){
        bool bold = false, italic = false;
        string sItalic = "<i>", eItalic = "</i>";
        string sBold = "<b>", eBold = "</b>";
        string ans;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='_'){
                if(italic){
                    ans+=eItalic;
                    italic = false;
                }

                else{
                    ans+=sItalic;
                    italic = true;
                }
            }

            else if(s[i]=='*'){
                if(bold){
                    ans+=eBold;
                    bold = false;
                }

                else{
                    ans+=sBold;
                    bold = true;
                }
            }

            else
                ans+=s[i];
        }

        cout<<ans<<endl;
    }

    return 0;
}
