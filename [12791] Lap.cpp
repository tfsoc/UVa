#include <iostream>

using namespace std;

int main()
{
    int x,y;
    while(cin >> x >> y)cout << y/(y-x) + ((y%(y-x)==0) ? 0 : 1) << endl;
    return 0;
}