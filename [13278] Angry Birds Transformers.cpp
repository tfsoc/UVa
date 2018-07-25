#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,x,y,ans,curr;
    int entry[100000]={0};
    int exit[100000]={0};
    vector<int> vec;

    while(cin >> n && n){
        ans=0;
        curr=0;

        vec.clear();
        memset(entry, 0, 100000*sizeof(int));
        memset(exit, 0, 100000*sizeof(int));

        while(n--){
            cin >> x >> y;
            // 45 deg rotate in sqrt(2) scaled coordinate system
            x=x+y;
            y=2*y-x;

            if(y>0)
                entry[0]++;
            else{
                entry[-y]++;
                vec.push_back(-y);
            }

            exit[x]++;
            vec.push_back(x);
        }

        for(int i=0;i<10000;i++){
            curr+=entry[i];
            ans=ans>curr ? ans : curr;
            curr-=exit[i];
        }
        cout << ans << endl;
    }
    return 0;
}