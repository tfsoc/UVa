#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

bool p[1000000];

int main()
{
    long long t,n,m,i,j,k;
    long long num=1;
    for(i=2;i<1000000;i++){
        p[i]=true;
    }

    for(i=2;i<1000;i++){
        if(p[i]==true){
            for(j=i*i;j<1000000;j+=i){
                p[j]=false;
            }
        }
    }

    cin >> t;
    while(t>0){
        cin >> n >> m;
        long long ans=0;
        long long x=0;
        long long y=0;
        long long z=0;
        long long k = 1000000007;


        ans+=n;
        ans%=k;
        if(m>=2){
            for(i=2;i<n;i++){
                if(p[i]){
                    ans+=((m-1)*(n-i))%k;
                    ans%=k;
                }
            }
        }

        //cout << ans << endl;

        if(m>=3){
            long long tmp=((m-1)*(m-2))%k;
            for(i=3;i<n;i++){
                if(i+2>=n)break;
                if(p[i] && p[i+2]){
                    ans+=(tmp*(n-i-2))%k;
                    ans%=k;
                }
            }
        }

        //cout << ans << endl;

        if(m>=4){
            long long tmp1=(((m-1)*(m-2)/2)*(m-3)/3)%k;
            for(i=3;i<n;i++){
                if(i+4>=n)break;
                if(p[i] && p[i+4] && p[i+2]){
                    ans+=(tmp1*(n-i-4))%k;
                    ans%=k;
                }
            }
        }

        cout << "Case " << num++ << ": " << ans << endl;
        t--;
    }
    return 0;
}