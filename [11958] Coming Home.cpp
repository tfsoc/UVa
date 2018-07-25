#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int main()
{
    int i,j;
    int t;
    int k,ch,cm,ah[1001],am[1001],q[1001],d,ans;
    while(cin >> t){
        for(j=0;j<t;j++){
        ans=9999;
        cin >> k;

        scanf("%d:%d",&ch,&cm);

        for(i=0;i<k;i++){
             scanf("%d:%d %d",&ah[i],&am[i],&q[i]);
             d=ah[i]*60+am[i]-ch*60-cm+q[i];
             if(d<q[i])d=(ah[i]+24)*60+am[i]-ch*60-cm+q[i];
             if(d<ans)ans=d;
        }
        printf("Case %d: %d\n",j+1,ans);
         }
    }
    return 0;
}