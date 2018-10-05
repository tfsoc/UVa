#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << endl


using namespace std;

int main()
{
    int m,n,k,x,y;
    while(cin >> k, k){
        cin >> n >> m;
        while(k--){
            cin >> x >> y;
            if(x==n || y==m)
                cout << "divisa";
            else{
                if(y>m) cout << "N";
                else    cout << "S";
                if(x>n) cout << "E";
                else    cout << "O";
            }
            cout << endl;
        }
    }
    return 0;
}
