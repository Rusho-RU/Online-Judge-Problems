#include <bits/stdc++.h>
using namespace std;

pair<int, int> calculate(int n, long long num){
    int ringNum = ceil(sqrt(num));

    if(ringNum%2==0)
        ringNum++;

    long long square = ringNum*ringNum;
    int squarePosX = ringNum + (n - ringNum)/2;
    int squarePosY = squarePosX;

    n = ringNum;

    if(num >= square - (n-1)){
        squarePosX -= (square-num);
    }

    else if(num >= square - (n-1)*2){
        squarePosX -= (n-1);
        squarePosY -= ((square - (n-1) - num));
    }

    else if(num >= square - (n-1)*3){
        squarePosX -= (num - (square - (n-1)*3));
        squarePosY -= (n-1);
    }
    else{
        ringNum-=2;
        square = ringNum*ringNum;
        squarePosY -= (num - square);
    }

    return make_pair(squarePosX, squarePosY);
}

int main(){
    int n;
    long long num;

    while(scanf("%d%lld",&n,&num) && n+num){
        pair<int, int>coordinate = calculate(n, num);
        printf("Line = %d, column = %d.", coordinate.first, coordinate.second);
    }

    return 0;
}
