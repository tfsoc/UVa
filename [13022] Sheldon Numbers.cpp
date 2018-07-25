#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;


vector<unsigned long long> vec;

int main()
{
    unsigned long long x,y;
    unsigned long long sum;
    unsigned long long num;
    unsigned long long N,M;
    long long ptr=0;
    long long i,j,ii,jj;

    num=0;
    for(i=1;i<=64;i++){
        num=num<<1;
        num+=1;
        vec.push_back(num);

        for(j=1;j+i<=64;j++){
            N=num;
            M=num<<j;
            vec.push_back(M);
            ii=i;
            while(ii<=64){
                N=N<<(i+j);
                N+=num;
                if(ii+i+j<=64)vec.push_back(N);

                M=N<<j;
                if(ii+i+j+j<=64)vec.push_back(M);

                ii+=j;
                ii+=i;
            }
        }
    }

    sort(vec.begin(),vec.end());

    //for(i=0;i<1000;i++)cout << vec[i] << endl;
    while(cin >> x >> y){
        sum=0;
        ptr=0;
        while(vec[ptr]<x)ptr++;
        while(vec[ptr++]<=y && ptr<1000001)sum++;
        cout << sum << endl;
    }
    return 0;
}