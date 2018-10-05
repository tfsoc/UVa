#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << endl
using namespace std;

int main()
{
    long t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a<b) cout << "<";
        else if (a>b) cout << ">";
        else cout << "=";
        cout << endl;
    }
    return 0;
}
