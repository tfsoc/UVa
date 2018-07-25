#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int t,i,j,len;
    string s;
    char last;

    cin >> t;
    for(i=0;i<t;i++){
        cin >> s;
        len=s.length();
        if(len==1 && s[len-1]=='0')j=1;
        else if(len==1 && s[len-1]=='1')j=66;
        else if(s[len-1]=='0' || s[len-1]=='5')j=76;
        else if(s[len-1]=='1' || s[len-1]=='6')j=16;
        else if(s[len-1]=='2' || s[len-1]=='7')j=56;
        else if(s[len-1]=='3' || s[len-1]=='8')j=96;
        else if(s[len-1]=='4' || s[len-1]=='9')j=36;


        cout << j << endl;
    }
    return 0;
}