#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

long long sum[26][26]={0};

long long f(int r, int c){
//    if(r>c){
//        int tmp=r;
//        r=c;
//        c=r;
//    }

    if(sum[r][c]!=0)
        return sum[r][c];
    else{
        int i,j,k,l;
        long long ans=0;
        for(i=1;i<=r;i++){
            ans+=f(i,c-1);
        }
        sum[r][c]=ans;
        return ans;
    }
}

int main()
{
    int i,j,k,l,m,n,t,a,b,r,c;
    cin >> t;
    for(i=0;i<=25;i++){
        sum[i][1]=1;
        sum[1][i]=1;
    }
    for(i=0;i<t;i++){
        cin >> r >> c;
        cout << f(r,c) << endl;
    }
    return 0;
}