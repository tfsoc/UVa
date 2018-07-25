#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>

using namespace std;



int main()
{
    int i,j,tmp;
    int N;
    int c[4];
    int sum;
    int dub;
    int a,b;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> c[0];
        cin >> c[1];
        cin >> c[2];
        cin >> c[3];
        sum=0;
        dub=0;
        for(j=0;j<4;j++){
            sum+=c[j]%10;
            sum+=c[j]/100;
            a=c[j]%100/10;

            b=c[j]/1000;
            //cout << "a = " << a << ", b = " << b << endl;
            a+=a;
            b+=b;
            a=a%10 + a/10;
            b=b%10 + b/10;

            dub+=a+b;
        }
        if((sum+dub)%10==0)
            cout << "Valid" << endl;
        else{
            cout << "Invalid" << endl;
            //cout << (sum+dub) << endl;
        }
    }


    return 0;
}