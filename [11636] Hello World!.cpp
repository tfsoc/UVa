#include <iostream>

using namespace std;

int main()
{
    int i,n,m,x;
    i=1;
    cin>>n;
    while(n>0)
    {
        m=1;
        x=0;
        while (m<n)
        {
            x++;
            m*=2;
        }
        cout<<"Case "<<i++<<": "<<x<<endl;

        cin>>n;
    }
    return 0;
}
