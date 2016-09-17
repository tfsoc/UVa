#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    string str;
    int i,j,k;
    int ptrD, ptrR;

    cin >> n;
    while(n!=0)
    {
        cin >> str;
        k=n;
        ptrR=-n;
        ptrD=-n;
        for(i=0;i<n;++i){
            if(str[i]=='Z')
            {
                k=0;
                break;
            }
            if(str[i]=='D')
            {
                k= min(i-ptrR,k);
                ptrD=i;
            }
            if(str[i]=='R')
            {
                k= min(i-ptrD,k);
                ptrR=i;
            }
        }

        cout << k << endl;
        cin >> n;
    }
    return 0;
}
