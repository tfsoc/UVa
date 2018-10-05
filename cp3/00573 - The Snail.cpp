#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int main()
{
    float h,u,d,f;

    while(cin >> h >> u >> d >> f, h){
        long day = 1;

        float curr = 0;
        float slow = f*u/100;

        while(1){
            curr+=u;

            if(curr>h){
                cout << "success";
                break;
            }

            curr-=d;
            if(curr<0){
                cout << "failure";
                break;
            }

            u-=slow*(u>0);
            day++;
        }


        cout << " on day " << day << endl;
    }
    return 0;
}
