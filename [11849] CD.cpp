#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string>
#include<sstream>
using namespace std;
int x[1000000];
int y[1000000];

int main()
{
    int N,M;
    int a;
    int i,j,k;
    int ptr;
    int ans;
    cin >> N >> M;
    while(N!=0 && M!=0){
    ans=0;
    for(i=0;i<N;i++){
        cin >> a;
        x[i]=a;
    }
    for(i=0;i<M;i++){
        cin >> a;
        y[i]=a;
    }
    ptr=0;
    for(i=0;i<M;i++){
        while(x[ptr]<y[i] && ptr<N)ptr++;
        if(x[ptr]==y[i])ans++;
    }
    cout << ans << endl;
    cin >> N >> M;
    }
    return 0;
}