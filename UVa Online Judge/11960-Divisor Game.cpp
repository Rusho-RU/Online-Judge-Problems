#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=int(a);i<=int(b);i++)
long long dp[1000001];

int main(){
    loop(i,1,1) dp[i]=1;
    loop(i,2,2) dp[i]=2;
    loop(i,3,3) dp[i]=3;
    loop(i,4,5) dp[i]=4;
    loop(i,6,7) dp[i]=6;
    loop(i,8,9) dp[i]=8;
    loop(i,10,11) dp[i]=10;
    loop(i,12,17) dp[i]=12;
    loop(i,18,19) dp[i]=18;
    loop(i,20,23) dp[i]=20;
    loop(i,24,29) dp[i]=24;
    loop(i,30,35) dp[i]=30;
    loop(i,36,47) dp[i]=36;
    loop(i,48,59) dp[i]=48;
    loop(i,60,71) dp[i]=60;
    loop(i,72,83) dp[i]=72;
    loop(i,84,89) dp[i]=84;
    loop(i,90,95) dp[i]=90;
    loop(i,96,107) dp[i]=96;
    loop(i,108,119) dp[i]=108;
    loop(i,120,167) dp[i]=120;
    loop(i,168,179) dp[i]=168;
    loop(i,180,239) dp[i]=180;
    loop(i,240,335) dp[i]=240;
    loop(i,336,359) dp[i]=336;
    loop(i,360,419) dp[i]=360;
    loop(i,420,479) dp[i]=420;
    loop(i,480,503) dp[i]=480;
    loop(i,504,539) dp[i]=504;
    loop(i,540,599) dp[i]=540;
    loop(i,600,629) dp[i]=600;
    loop(i,630,659) dp[i]=630;
    loop(i,660,671) dp[i]=660;
    loop(i,672,719) dp[i]=672;
    loop(i,720,839) dp[i]=720;
    loop(i,840,1079) dp[i]=840;
    loop(i,1080,1259) dp[i]=1080;
    loop(i,1260,1439) dp[i]=1260;
    loop(i,1440,1679) dp[i]=1440;
    loop(i,1680,2159) dp[i]=1680;
    loop(i,2160,2519) dp[i]=2160;
    loop(i,2520,3359) dp[i]=2520;
    loop(i,3360,3779) dp[i]=3360;
    loop(i,3780,3959) dp[i]=3780;
    loop(i,3960,4199) dp[i]=3960;
    loop(i,4200,4319) dp[i]=4200;
    loop(i,4320,4619) dp[i]=4320;
    loop(i,4620,4679) dp[i]=4620;
    loop(i,4680,5039) dp[i]=4680;
    loop(i,5040,7559) dp[i]=5040;
    loop(i,7560,9239) dp[i]=7560;
    loop(i,9240,10079) dp[i]=9240;
    loop(i,10080,12599) dp[i]=10080;
    loop(i,12600,13859) dp[i]=12600;
    loop(i,13860,15119) dp[i]=13860;
    loop(i,15120,18479) dp[i]=15120;
    loop(i,18480,20159) dp[i]=18480;
    loop(i,20160,25199) dp[i]=20160;
    loop(i,25200,27719) dp[i]=25200;
    loop(i,27720,30239) dp[i]=27720;
    loop(i,30240,32759) dp[i]=30240;
    loop(i,32760,36959) dp[i]=32760;
    loop(i,36960,37799) dp[i]=36960;
    loop(i,37800,40319) dp[i]=37800;
    loop(i,40320,41579) dp[i]=40320;
    loop(i,41580,42839) dp[i]=41580;
    loop(i,42840,43679) dp[i]=42840;
    loop(i,43680,45359) dp[i]=43680;
    loop(i,45360,50399) dp[i]=45360;
    loop(i,50400,55439) dp[i]=50400;
    loop(i,55440,65519) dp[i]=55440;
    loop(i,65520,75599) dp[i]=65520;
    loop(i,75600,83159) dp[i]=75600;
    loop(i,83160,98279) dp[i]=83160;
    loop(i,98280,110879) dp[i]=98280;
    loop(i,110880,131039) dp[i]=110880;
    loop(i,131040,138599) dp[i]=131040;
    loop(i,138600,151199) dp[i]=138600;
    loop(i,151200,163799) dp[i]=151200;
    loop(i,163800,166319) dp[i]=163800;
    loop(i,166320,196559) dp[i]=166320;
    loop(i,196560,221759) dp[i]=196560;
    loop(i,221760,262079) dp[i]=221760;
    loop(i,262080,277199) dp[i]=262080;
    loop(i,277200,327599) dp[i]=277200;
    loop(i,327600,332639) dp[i]=327600;
    loop(i,332640,360359) dp[i]=332640;
    loop(i,360360,393119) dp[i]=360360;
    loop(i,393120,415799) dp[i]=393120;
    loop(i,415800,443519) dp[i]=415800;
    loop(i,443520,471239) dp[i]=443520;
    loop(i,471240,480479) dp[i]=471240;
    loop(i,480480,491399) dp[i]=480480;
    loop(i,491400,498959) dp[i]=491400;
    loop(i,498960,554399) dp[i]=498960;
    loop(i,554400,655199) dp[i]=554400;
    loop(i,655200,665279) dp[i]=655200;
    loop(i,665280,720719) dp[i]=665280;
    loop(i,720720,831599) dp[i]=720720;
    loop(i,831600,942479) dp[i]=831600;
    loop(i,942480,982799) dp[i]=942480;
    loop(i,982800,997919) dp[i]=982800;
    loop(i,997920,1000000) dp[i]=997920;
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",dp[n]);
    }
    return 0;
}
