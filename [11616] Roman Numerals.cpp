#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int arabic(string str)
{
    int num = atoi(str.c_str());
    if(num==0)return 1;
    while(num>=1000)
    {
        cout << 'M';
        num-=1000;
    }
    if(num>=900)
    {
        cout << "CM";
        num-=900;
    }
    if(num>=500)
    {
        cout << 'D';
        num-=500;
    }
    if(num>=400)
    {
        cout << "CD";
        num-=400;
    }
    while(num>=100)
    {
        cout << 'C';
        num-=100;
    }
    if(num>=90)
    {
        cout << "XC";
        num-=90;
    }
    if(num>=50)
    {
        cout << 'L';
        num-=50;
    }
    if(num>=40)
    {
        cout << "XL";
        num-=40;
    }
    while(num>=10)
    {
        cout << 'X';
        num-=10;
    }
    if(num>=9)
    {
        cout << "IX";
        num-=9;
    }
    if(num>=5)
    {
        cout << 'V';
        num-=5;
    }
    if(num>=4)
    {
        cout << "IV";
        num-=4;
    }
    while(num>0)
    {
        cout << 'I';
        num--;
    }
    cout << endl;
    return 0;
}

int roman(string str)
{
    int i;
    int num=0;
    int len=str.length();
    for(i=0;i<len;i++)
    {
        switch(str[i])
        {
        case 'I':
            if(str[i+1]!='V' && str[i+1]!='X')
                num+=1;
            else
                num-=1;
        break;
        case 'V':
            num+=5;
        break;
        case 'X':
            if(str[i+1]!='C' && str[i+1]!='L')
                num+=10;
            else
                num-=10;
        break;
        case 'L':
            num+=50;
        break;
        case 'C':
            if(str[i+1]!='D' && str[i+1]!='M')
                num+=100;
            else
                num-=100;
        break;
        case 'D':
            num+=500;
        break;
        case 'M':
            num+=1000;
        break;
        default:
            return 1;
        break;
        }
    }
    cout << num << endl;
    return 0;
}



int main()
{
    int n;
    string str;
    while(cin >> str)
    {
        if(str[0]>='0'&str[0]<='9')
            arabic(str);
        else
            roman(str);
    }

    return 0;
}
