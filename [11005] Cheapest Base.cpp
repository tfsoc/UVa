#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    int t,q,m,n,i,j=1, sum, curr, symb;
    int cost[36];
    bool cheap[36] = {0};

    cin >> t;
    while(t--){
        for(i=0;i<36;i++)cin >> cost[i];
        cin >> q;
        cout << "Case " << j++ << ":" << endl;

        while(q--){
            cin >> n;
            memset(cheap, 0, 36*sizeof(bool));
            sum = 4608; //36*128 is the max cost
            for(i=1;i<36;i++){
                curr=0;
                m=n;
                while(m>0){
                    symb = m%(i+1);
                    curr+=cost[symb];
                    m/=(i+1);
                }
                if(curr<sum){
                    memset(cheap, 0, 36*sizeof(bool)); // reset stats
                    cheap[i]=1;
                    sum=curr;
                }else if(curr==sum){
                    cheap[i]=1;
                }
            }

            cout << "Cheapest base(s) for number " << n << ":";
            for(i=1;i<36;i++)
                if(cheap[i])
                     cout << " " << i+1;
            cout << "\n";
        }
        if(t)cout << endl;
    }

    return 0;
}