#include <iostream>

using namespace std;

int main()
{
    int test;
    int t;
    int e,f,c;
    int ans;
    cin >> test;
    for(t=0;t<test;t++)
    {
        ans=0;
        cin >> e >> f >> c;
        e=e+f;
        while(e/c!=0)
        {
            ans+=e/c;
            e=e/c+e%c;
        }
        cout << ans << endl;
    }
    return 0;
}
