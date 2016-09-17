#include <iostream>

using namespace std;

int main()
{
    int s, p[12], r[12];
    int i;
    int c=1;
    cin >> s;
    while(s>=0)
    {
        for(i=0;i<12;i++)
            cin >> p[i];
        for(i=0;i<12;i++)
            cin >> r[i];
        cout << "Case " << c++ << ':' << endl;

        for(i=0;i<12;i++)
        {
            cout << "No problem";
            if(s>=r[i])
            {
                s=s-r[i];
                cout << "! :D" << endl;
            }
            else
            {
                cout << ". :(" << endl;
            }
            s+=p[i];
        }
        cin >> s;
    }
    return 0;
}
