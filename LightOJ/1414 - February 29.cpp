#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int cnt(int year){
    return year/4 - year/100 + year/400;
}

bool isLeapYear(int year){
    if(year%4==0 && year%100!=0 || year%400==0)
        return true;
    return false;
}

int main(){
    FasterIO;

    int n, Case=0;
    cin>>n;

    while(n--){
        string month1, month2;
        int leap = 0,day1, year1, day2, year2;

        cin>>month1, cin>>day1, cin.get(), cin>>year1;
        cin>>month2, cin>>day2, cin.get(), cin>>year2;

        leap += cnt(year2) - cnt(year1-1);

        if(isLeapYear(year1) && month1!="January" && month1!="February")
            leap--;

        if(isLeapYear(year2) && (month2=="January" || month2=="February" && day2 < 29))
            leap--;

        cout<<"Case "<<++Case<<": "<<leap<<endl;
    }

    return 0;
}
