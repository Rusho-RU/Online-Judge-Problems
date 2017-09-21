#include <bits/stdc++.h>
using namespace std;

void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        swap(*(str+start), *(str+end));
        start++;
        end--;
    }
}

char* ItoA(int num, char* str, int base){
    int i = 0;
    bool isNegative = false;
    if (num == 0){
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
    if (num < 0 && base == 10){
        isNegative = true;
        num = -num;
    }
    while (num != 0){
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }
    if (isNegative)
        str[i++] = '-';
    str[i] = '\0';
    reverse(str,i);
    return str;
}


int main(){
    char s1[28],s2[28];
    while(gets(s1) && gets(s2)){
        int i,j,l1=strlen(s1),l2=strlen(s2),sum1=0,sum2=0,temp;
        char d1[6],d2[6];
        for(i=0;i<l1;i++){
            if(s1[i]>=65 && s1[i]<=90)
                sum1+=s1[i]-64;
            else if(s1[i]>=97 && s1[i]<=122)
                sum1+=s1[i]-96;
        }
        for(i=0;i<l2;i++){
            if(s2[i]>=65 && s2[i]<=90)
                sum2+=s2[i]-64;
            else if(s2[i]>=97 && s2[i]<=122)
                sum2+=s2[i]-96;
        }
        if(!sum1 && !sum2){
            printf("\n");
            continue;
        }
        else if(!sum1 || !sum2){
            printf("0.00 %%\n");
            continue;
        }
        ItoA(sum1,d1,10),ItoA(sum2,d2,10),l1=strlen(d1),l2=strlen(d2);
        for(;l1-1;){
            sum1=0;
            for(i=0;i<l1;i++)
                sum1+=d1[i]-'0';
            ItoA(sum1,d1,10);
            l1=strlen(d1);
        }
        for(;l2-1;){
            sum2=0;
            for(i=0;i<l2;i++)
                sum2+=d2[i]-'0';
            ItoA(sum2,d2,10);
            l2=strlen(d2);
        }
        if(sum1>sum2){
            temp=sum1;
            sum1=sum2;
            sum2=temp;
        }
        printf("%0.2lf %%\n",((double)sum1/sum2)*100);
    }
    return 0;
}
