#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int a,b,c,d,e,f,g,h,i;
    int j;
    int x[9]={0};
    while(cin>>s){
        cin >> s;
        cin >> a >> b >> c;
        cin >> d >> e >> f;
        cin >> g >> h >> i;

        x[8]=7*( g -6*a +3*b +c +3*d +2*e -4*f -4*h +i );
        x[7]=2*g -9*a +5*b +c +4*d +3*e -6*f -6*h +2*i;
        x[6]=5*f +8*a -4*d -3*e -4*b +6*h -g -c -i -x[7];

        x[5]=i -x[7] -x[8];
        x[4]=h -x[6] -x[7] -x[8];
        x[3]=d -b +c -x[5] -x[6];

        x[2]=b -a -x[4] -9*x[3];
        x[1]=c -x[5] -x[2];
        x[0]=a -x[3] -x[1];

        for(j=0;j<9;j++)x[j]=(x[j]%10+10)%10;

        while(x[0]--)cout << "a";
        while(x[1]--)cout << "b";
        while(x[2]--)cout << "c";

        while(x[3]--)cout << "d";
        while(x[4]--)cout << "e";
        while(x[5]--)cout << "f";

        while(x[6]--)cout << "g";
        while(x[7]--)cout << "h";
        while(x[8]--)cout << "i";
        cout << endl;
    }
    return 0;
}