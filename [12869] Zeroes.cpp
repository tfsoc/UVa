#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    long long x,y;
    cin >> x >> y;
    while(x||y){
        cout << 1+y/5-x/5 << endl;
        cin >> x >> y;
    }
    return 0;
}