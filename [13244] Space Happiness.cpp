#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    long long t,s,ans,n;
    long long i,j;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> s;
        n=(s+1)/2;
        ans=(1+s)*n-s;
        cout << ans << endl;
    }
    return 0;
}