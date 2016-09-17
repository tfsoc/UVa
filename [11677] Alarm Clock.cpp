#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2;
    int x;
    cin >> h1 >> m1 >> h2 >> m2;
    while(h1+h2+m1+m2!=0)
    {
        x=0;
        cout << (24+h2-h1) << endl;
        cout << (24+h2-h1)%24 << endl;
        cout << ((24+h2-h1)%24)*60 << endl;
        cout <<((24+h2-h1)%24)*60+m2-m1 << endl;

        x=(1440+((24+h2-h1)%24)*60+m2-m1)%1440;
        cout << x << endl;
        cin >> h1 >> m1 >> h2 >> m2;
    }
    return 0;
}
